#ifndef FOLDER_H
#define FOLDER_H

#include <string>

using namespace std;

class Folder {

    string folder_path;

public:

    void set_path(string path);
    string get_path();

};

#endif