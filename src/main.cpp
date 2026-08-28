#include "../include/File.h"
#include "../include/Folder.h"
#include "../include/Scanner.h"
#include "../include/Analyzer.h"

using namespace std;

int main() {

    Folder folder;
    FileScanner scanner;
    Analyzer analyzer;

    folder.set_path("C:/Users/Beenish/Downloads");

    scanner.set_path(folder.get_path());

    scanner.scan_folder();

    return 0;
}