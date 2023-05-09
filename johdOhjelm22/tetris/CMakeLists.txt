cmake_minimum_required(VERSION 3.5)

project(tetris LANGUAGES C)

add_executable(tetris main.c)

install(TARGETS tetris
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR})
