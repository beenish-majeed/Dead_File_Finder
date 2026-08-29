#ifndef SCANNER_H
#define SCANNER_H

#include <string>

using namespace std;

class Scanner {

    string folder_path;

public:
    void set_path(string path);
    void scan_folder();
};

#endif