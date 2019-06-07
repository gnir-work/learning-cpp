#include <iostream>
#include "io/keyboardEventReader.h"
#include "utils/keyboardEventUtils.h"

int main() {
    std::ifstream keyboardEventFile = KeyboardEventReader::getKeyboardEventFileStream();
    while (true) {
        std::cout << "hello" << std::endl;
        input_event test = KeyboardEventReader::getNextKeyPressEvent(keyboardEventFile);
        std::cout << KeyboardEventUtils::convertEventCodeToString(test.code) << std::endl;
    }

}