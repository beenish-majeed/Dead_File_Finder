#include "../include/Scanner.h"
#include <iostream>
#include <filesystem>

using namespace std;

namespace fs = std::filesystem;

void Scanner::scan_folder() {

    cout << "\nFiles:\n";

    fs::path folderPath = folder_path;

    int fileCount = 0;
    int folderCount = 0;

    for (const auto& entry : fs::directory_iterator(folderPath)) {

        if (entry.is_regular_file()) {

            cout << "FILE: " << entry.path().filename() << '\n';
            fileCount++;

        }
        else if (entry.is_directory()) {

            cout << "FOLDER: " << entry.path().filename() << '\n';
            folderCount++;

        }
    }

    cout << "\n----------------------------------";
    cout << "\nTotal Files: " << fileCount;
    cout << "\nTotal Folders: " << folderCount;
    cout << "\n----------------------------------\n";
}