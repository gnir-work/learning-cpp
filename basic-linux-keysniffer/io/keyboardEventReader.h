//
// Created by gnir on 6/7/19.
//

#ifndef BASIC_LINUX_KEYSNIFFER_KEYBOARDEVENTREADER_H
#define BASIC_LINUX_KEYSNIFFER_KEYBOARDEVENTREADER_H

#include <fstream>
#include "/usr/include/linux/input.h"

namespace KeyboardEventReader {

    /**
     * Opens the event keyboard file.
     * @return a file stream to the keyboard event file.
     */
    std::ifstream getKeyboardEventFileStream();

    /**
     * Listens to the keyboard event file until there is a key press (all other events are ignored, check input.h
     * for a reference to the other events), please note that only key down and key hold events are
     * supported, key up event is ignored.
     * It is possible to distinct between the different key events using the value field when
     * value 0: key up
     * value 1: key down
     * value 2: key hold
     * @see KeyboardEventReader::KeyboardEventTypes
     * Afterwards the function creates an input_event struct for the given event
     * and returns it.
     * @param keyboardEventFile A stream to the key board event file which can be found using getKeyboardEventFileStream
     * @see getKeyboardEventFileStream
     * @see https://git.kernel.org/pub/scm/linux/kernel/git/torvalds/linux.git/tree/include/uapi/linux/input.h
     * @return
     */
    input_event getNextKeyPressEvent(std::ifstream& keyboardEventFile);
}

#endif //BASIC_LINUX_KEYSNIFFER_KEYBOARDEVENTREADER_H
