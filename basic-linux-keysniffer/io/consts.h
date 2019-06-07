//
// Created by gnir on 6/7/19.
//

#ifndef BASIC_LINUX_KEYSNIFFER_CONSTS_H
#define BASIC_LINUX_KEYSNIFFER_CONSTS_H

namespace KeyboardEventReader {

    /**
     * An enum class containing the input event values corresponding to the key down
     * and key hold event.
     * This enum is used in order to determine which events are relevant to the key sniffer
     * and which are not.
     */
    enum class KeyboardEventTypes {
        DOWN = 1,
        HOLD = 2
    };

    /** The location of the keyboard input file on linux */
    extern const char fileLocation[];
}

#endif //BASIC_LINUX_KEYSNIFFER_CONSTS_H
