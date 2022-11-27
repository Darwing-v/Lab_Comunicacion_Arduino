cmake_minimum_required(VERSION 3.24.2)

project(Lab_arduino)

include_directories(${CMAKE_CURRENT_SOURCE_DIR}/include) 

set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/src)
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)

set(SOURCES src/config_tty.cpp src/main.cpp src/funciones_gr6.cpp)

add_executable(juego_pulsador.bin ${SOURCES})

