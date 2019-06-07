//
// Created by gnir on 6/7/19.
//
#include "keyboardEventReader.h"

#include <string>
#include <iostream>
#include <fstream>
#include <cstdlib>

// Local includes
#include "consts.h"
#include "utils.h"

// Kernel includes
#include "/usr/include/linux/input-event-codes.h"

namespace KeyboardEventReader {

    std::ifstream getKeyboardEventFile() {
        std::ifstream keyboardEventFile(KeyboardEventReader::fileLocation);
        SnifferIO::checkFileStream(keyboardEventFile, KeyboardEventReader::fileLocation);
        return keyboardEventFile;
    }

    input_event getNextKeyPressEvent(std::ifstream& keyboardEventFile) {
        input_event newEvent{};
        do {
            keyboardEventFile.read((char *) &newEvent, sizeof(input_event));
        } while (newEvent.type != EV_KEY ||
                (newEvent.value != static_cast<int>(KeyboardEventReader::KeyboardEventTypes::DOWN) &&
                 newEvent.value != static_cast<int>(KeyboardEventReader::KeyboardEventTypes::HOLD)));
        return newEvent;
    }
}
