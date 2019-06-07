//
// Created by gnir on 6/7/19.
//

#ifndef BASIC_LINUX_KEYSNIFFER_KEYBOARDEVENTUTILS_H
#define BASIC_LINUX_KEYSNIFFER_KEYBOARDEVENTUTILS_H

#include <string>
#include "/usr/include/linux/input-event-codes.h"

namespace KeyboardEventUtils {

    /**
     * Convert from an input_event code to the actual key pressed using input-event-codes.h.
     * In case of numbers a string containing the number will be returned.
     * In case of letters the english lower cased letter will be returned
     * In case of special keys, <key_name> will be returned, for example <esc>
     * @see https://git.kernel.org/pub/scm/linux/kernel/git/torvalds/linux.git/tree/include/uapi/linux/input-event-codes.h
     * @param eventCode The event code that needs to be converted to the actual key.
     * @return A string containing the actual key pressed
     */
    std::string convertEventCodeToString(int eventCode);
}

#endif //BASIC_LINUX_KEYSNIFFER_KEYBOARDEVENTUTILS_H
