set(CMAKE_TOOLCHAIN_FILE arduino-cmake/cmake/ArduinoToolchain.cmake)

cmake_minimum_required(VERSION 2.8)
project(minimal)

set(CMAKE_CXX_STANDARD 14)


set(ARDUINO_DEFAULT_BOARD uno)
set(ARDUINO_DEFAULT_PORT /dev/ttyACM0)

generate_arduino_firmware(inc SRCS inc.cpp)

