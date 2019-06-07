//
// Created by gnir on 6/7/19.
//

#include "utils.h"
#include <iostream>
#include <cstdlib>

namespace SnifferIO {
    void checkFileStream(std::ios &fileStream, const std::string& fileName) {
        if (!fileStream) {
            std::cerr << "Failed to open " << fileName << "!" << std::endl;
            exit(1);
        }
    }
}