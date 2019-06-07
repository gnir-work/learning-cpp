//
// Created by gnir on 6/7/19.
//
#include <string>
#include <iostream>
#include <fstream>
#include <cstdlib>

// Local includes
#include "keyboardEventReader.h"
#include "consts.h"

// Kernel includes
#include "/usr/include/linux/input-event-codes.h"

namespace KeyboardEventReader {

    std::ifstream getKeyboardEventFileStream() {
        std::ifstream keyboardEventFile(KeyboardEventReader::fileLocation);
        if (!keyboardEventFile) {
            std::cerr << "Failed to open " << KeyboardEventReader::fileLocation << " Are you running as root?"
                      << std::endl;
            exit(1);
        } else {
            return keyboardEventFile;
        }
    }

    input_event getNextKeyPressEvent(std::ifstream& keyboardEventFile) {
        input_event newEvent{};
        do {
            keyboardEventFile.read((char *)&newEvent, sizeof(input_event));
        } while (newEvent.type != EV_KEY);
        return newEvent;
    }
}
