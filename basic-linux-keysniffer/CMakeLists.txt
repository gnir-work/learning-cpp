cmake_minimum_required(VERSION 3.14)
project(basic_linux_keysniffer)

set(CMAKE_CXX_STANDARD 14)

add_executable(basic_linux_keysniffer main.cpp io/keyboardEventReader.cpp io/keyboardEventReader.h io/consts.cpp io/consts.h utils/keyboardEventUtils.cpp utils/keyboardEventUtils.h)