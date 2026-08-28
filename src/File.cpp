#include "../include/File.h"
#include <iostream>
#include <filesystem>
using namespace std;

namespace fs = std::filesystem;

void UploadFolder::upl_path(){

    cout<<"Enter folder path: ";
    getline(cin, folder_path);
    fs::path folderPath = folder_path;

    if (fs::exists(folderPath)) {
        cout<<"\nscanning...";
    }  
    else {
        cout<<"\nSorry Your Folder not exist!";
        cout<<"\nPlease Try Again.";
    }
}