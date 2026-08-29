#include "../include/Scanner.h"
#include <iostream>
#include <filesystem>

using namespace std;

namespace fs = std::filesystem;

void Scanner::set_path(string path) {

    folder_path = path;

}

void Scanner::scan_folder() {

    fs::path folderPath = folder_path;

    int fileCount = 0;
    int folderCount = 0;

    cout << "\nScanning...";
    cout << "\n----------------------------------\n";

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