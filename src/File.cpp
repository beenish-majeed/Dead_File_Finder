#include "../include/File.h"
#include <iostream>
#include <filesystem>

using namespace std;

namespace fs = std::filesystem;

void UploadFolder::upl_path() {

    cout << "\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~";
    cout << "\n         DEAD FILE FINDER        ";
    cout << "\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";

    cout << "\nEnter folder path: ";
    getline(cin, folder_path);

    fs::path folderPath = folder_path;

    if (fs::exists(folderPath) && fs::is_directory(folderPath)) {

        cout << "\nFolder found.\n";
        cout << "\nScanning...";
        cout << "\n----------------------------------\n";

    }
    else {

        cout << "\nSorry, folder does not exist!";
        cout << "\nPlease try again.\n";

    }
}