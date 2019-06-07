#include <iostream>
#include "io/keyboardEventReader.h"
#include "utils/keyboardEventUtils.h"

int main() {
    std::ifstream keyboardEventFile = KeyboardEventReader::getKeyboardEventFileStream();
    while (true) {
        input_event inputEvent = KeyboardEventReader::getNextKeyPressEvent(keyboardEventFile);
        std::cout << KeyboardEventUtils::convertEventCodeToString(inputEvent.code) << std::endl;
    }

}