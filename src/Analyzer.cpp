#include "../include/Analyzer.h"
#include <iostream>

using namespace std;

void Analyzer::analyze(File file) {

    cout << "\nAnalyzing: " << file.get_name();

    if (file.get_size() == 0) {

        Finding finding(file.get_name(), "Empty file");
        finding.show_finding();

    }

}