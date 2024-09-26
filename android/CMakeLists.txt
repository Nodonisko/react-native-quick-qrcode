cmake_minimum_required(VERSION 3.4.1)
project(QuickQrcode)

set (CMAKE_VERBOSE_MAKEFILE ON)
set (CMAKE_CXX_STANDARD 14)

add_library(react-native-quick-qrcode            SHARED
            ../cpp/react-native-quick-qrcode.cpp
            cpp-adapter.cpp
)

# Specifies a path to native header files.
include_directories(
            ../cpp
)
