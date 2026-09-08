#include "../include/Analyzer.h"
#include <iostream>
#include <filesystem>
#include <fstream>
#include <chrono>

using namespace std;
namespace fs = std::filesystem;

void Analyzer::analyze(string folder_path) {

    fs::path folderPath = folder_path;

    cout << "\n\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~";
    cout << "\n        FILE ANALYSIS";
    cout << "\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
    
    bool deadFileFound = false;
    for (const auto& entry : fs::directory_iterator(folderPath)) {

        if (!entry.is_regular_file()) {
            continue;
        }

        fs::path filePath = entry.path();
        string fileName = filePath.filename().string();
        string extension = filePath.extension().string();
        auto fileSize = fs::file_size(filePath);

        // ADDED: Get last modified time
        auto lastModified = fs::last_write_time(filePath);

        // ADDED: Check if file was modified 6 months ago
        auto currentTime = fs::file_time_type::clock::now();
        auto sixMonthsAgo = currentTime - chrono::hours(24 * 30 * 6);

        // ADDED: Skip large files
        if (fileSize > 100 * 1024 * 1024) {
            continue;
        }

        // ADDED: Skip normal/recent files
        if (fileSize != 0 && lastModified > sixMonthsAgo) {
            continue;
        }

        int wordCount = 0;

        ifstream file(filePath);
        string word;

        while (file >> word) {
            wordCount++;
        }

        while (file >> word) {
            wordCount++;
        }

        file.close();

        cout << "\nFile: " << fileName;
        cout << "\nExtension: "
             << (extension.empty() ? "No extension" : extension);
        cout << "\nSize: " << fileSize << " bytes";
        cout << "\nWords: " << wordCount;

        cout << "\nCategory: ";

        if (fileSize == 0) {
            cout << "EMPTY FILE";
        }
        else if (lastModified <= sixMonthsAgo) {
            cout << "OLD FILE";

            // ADDED: Show last modified time
            auto time = chrono::system_clock::to_time_t(
                chrono::system_clock::now()
            );

            cout << "\nLast Modified: 6+ months ago";
        }
    
        cout << "\n----------------------------------";

        cout << "\nWhat would you like to do?";
        cout << "\n1. Delete this file";
        cout << "\n2. Keep this file";
        cout << "\n3. Exit";
        cout << "\n\nChoose: ";

        int choice;
        cin >> choice;

        if (choice == 1) {
            try {
                file.close();

                if (fs::remove(filePath)) {
                    cout << "\nFile deleted successfully.\n";
                    cout << "\nExiting Dead File Finder...\n";
                    return;
                }
                else {
                    cout << "\nFile could not be deleted.\n";
                }
            }
            catch (const fs::filesystem_error& error) {
                cout << "\nUnable to delete file.";
                cout << "\nReason: " << error.what() << "\n";
            }
        }
    }

    if (!deadFileFound) {
    cout << "\nNo dead files found.";
    }
    cout << "\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~";
    cout << "\n       ANALYSIS COMPLETE";
    cout << "\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
}