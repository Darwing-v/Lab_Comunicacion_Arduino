cmake_minimum_required(VERSION 3.24.2)

project(Ordenamiendo_Numerico)

include_directories(${CMAKE_CURRENT_SOURCE_DIR}/include) 

set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)

set(SOURCES src/files_ops1.c src/main.c src/funciones.c)

add_executable(Organizar_num.bin ${SOURCES})

