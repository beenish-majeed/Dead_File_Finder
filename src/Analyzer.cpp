#include "../include/Analyzer.h"
#include <iostream>
#include <filesystem>
#include <fstream>

using namespace std;

namespace fs = std::filesystem;

void Analyzer::analyze(string folder_path) {

    fs::path folderPath = folder_path;

    cout << "\n";
    cout << "\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~";
    cout << "\n        FILE ANALYSIS";
    cout << "\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";

    for (const auto& entry : fs::directory_iterator(folderPath)) {

        if (!entry.is_regular_file()) {
            continue;
        }

        fs::path filePath = entry.path();

        string fileName = filePath.filename().string();
        string extension = filePath.extension().string();

        auto fileSize = fs::file_size(filePath);

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
        else if (fileSize > 100 * 1024 * 1024) {

            cout << "LARGE FILE";

        }
        else {

            cout << "NORMAL FILE";
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

    cout << "\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~";
    cout << "\n       ANALYSIS COMPLETE";
    cout << "\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
}