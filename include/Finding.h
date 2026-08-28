#ifndef FINDING_H
#define FINDING_H

#include <string>

using namespace std;

class Finding {

    string file_name;
    string reason;

public:

    Finding(string name, string reason);

    void show_finding();

};

#endif