#ifndef FILE_H
#define FILE_H

#include <string>

using namespace std;

class UploadFolder {

    string folder_path;

public:

    bool upl_path();
    string get_path();

};

#endif