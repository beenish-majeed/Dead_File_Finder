#include "../include/File.h"
#include "../include/Folder.h"
#include "../include/Scanner.h"
#include "../include/Analyzer.h"

using namespace std;

int main() {

    UploadFolder folderInput;
    Folder folder;
    Scanner scanner;
    Analyzer analyzer;

    if (!folderInput.upl_path()) {

        return 0;
    }

    folder.set_path(folderInput.get_path());

    scanner.set_path(folder.get_path());

    scanner.scan_folder();

    analyzer.analyze(folder.get_path());

    return 0;
}