#include "../include/Finding.h"
#include <iostream>

using namespace std;

Finding::Finding(string name, string reason) {

    file_name = name;
    this->reason = reason;
}

void Finding::show_finding() {

    cout << "\nFile: " << file_name;
    cout << "\nReason: " << reason;
    cout << "\n----------------------------------";
}