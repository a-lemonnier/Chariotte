cmake_minimum_required(VERSION 3.5)

project(Chariotte LANGUAGES CXX)

set(CMAKE_INCLUDE_CURRENT_DIR ON)

set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)


set(utils_files chariotte_utils.h)

add_library(chariotte_utils STATIC ${utils_files})
