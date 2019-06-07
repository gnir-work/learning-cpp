//
// Created by gnir on 6/7/19.
//

#ifndef BASIC_LINUX_KEYSNIFFER_UTILS_H
#define BASIC_LINUX_KEYSNIFFER_UTILS_H

#include <ios>

namespace SnifferIO {

    /**
     * Check if the file stream was created correctly.
     * If not output an error message and exit.
     * @param fileStream The file stream to check
     * @param fileName The file that the stream belongs to, needed for error message
     */
    void checkFileStream(std::ios& fileStream, const std::string& fileName);
}

#endif //BASIC_LINUX_KEYSNIFFER_UTILS_H
