#include "../include/File.h"
#include <iostream>
#include <filesystem>

using namespace std;

namespace fs = std::filesystem;

bool UploadFolder::upl_path() {

    cout << "\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~";
    cout << "\n         DEAD FILE FINDER        ";
    cout << "\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";

    cout << "\nEnter folder path: ";
    getline(cin, folder_path);

    fs::path folderPath = folder_path;

    if (fs::exists(folderPath) && fs::is_directory(folderPath)) {

        cout << "\nFolder found.\n";

        return true;
    }
    else {

        cout << "\nSorry, your folder does not exist!";
        cout << "\nPlease try again.\n";

        return false;
    }
}

string UploadFolder::get_path() {

    return folder_path;
}