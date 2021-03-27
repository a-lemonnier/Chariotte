cmake_minimum_required(VERSION 3.5)

project(Chariotte LANGUAGES CXX)

set(CMAKE_INCLUDE_CURRENT_DIR ON)

set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(QT NAMES Qt6 Qt5 COMPONENTS Widgets LinguistTools REQUIRED)
find_package(Qt${QT_VERSION_MAJOR} COMPONENTS Widgets LinguistTools REQUIRED)

#option(UPDATE_TRANSLATIONS ON)

set(MW_DIR mainwindow)
set(SW_DIR subwindows)
set(WIDGETS_DIR widgets)
set(UTILS_DIR utilities)
set(LANG_DIR lang)

include_directories(${MW_DIR})
include_directories(${SW_DIR})
#include_directories(${WIDGETS_DIR})
#include_directories(${LANG_DIR})
include_directories(rc)

add_subdirectory(${MW_DIR})
add_subdirectory(${SW_DIR})
add_subdirectory(${WIDGETS_DIR})
add_subdirectory(${LANG_DIR})
add_subdirectory(${UTILS_DIR})

file(GLOB_RECURSE MW_SRC ${MW_DIR}/*.h ${MW_DIR}/*.cpp ${MW_DIR}/*.tpp)
file(GLOB_RECURSE SW_SRC ${SW_DIR}/*.h ${SW_DIR}/*.cpp ${SW_DIR}/*.tpp)
file(GLOB_RECURSE WIDGETS_SRC ${WIDGETS_DIR}/*.h ${WIDGETS_DIR}/*.cpp ${WIDGETS_DIR}/*.tpp)

file(GLOB_RECURSE qrc_files *.qrc)

if(${QT_VERSION_MAJOR} GREATER_EQUAL 6)
    qt_add_resources(RC_FILES ${qrc_files} )
else()
    qt5_add_resources(RC_FILES ${qrc_files})
endif()


message(STATUS MW_SRC: ${MW_SRC})
message(STATUS SW_SRC: ${SW_SRC})
message(STATUS SW_SRC: ${WIDGETS_SRC})
message(STATUS RC_FILES: ${RC_FILES})
message(STATUS TS_FILES: ${TS_FILES})

set(PROJECT_SOURCES
        main.cpp
        ${MW_SRC}
        ${SW_SRC}
        ${WIDGETS_SRC}
        ${RC_FILES}
        #${TS_FILES}
)


if(${QT_VERSION_MAJOR} GREATER_EQUAL 6)
    qt_create_translation(QM_FILES ${CMAKE_SOURCE_DIR} ${TS_FILES})
    qt_add_executable(Chariotte ${PROJECT_SOURCES} ${QM_FILES})

else()
    qt5_create_translation(QM_FILES ${CMAKE_SOURCE_DIR} ${TS_FILES})
    add_executable(Chariotte ${PROJECT_SOURCES} ${QM_FILES})

endif()



target_link_libraries(Chariotte PRIVATE Qt${QT_VERSION_MAJOR}::Widgets chariotte_utils)
