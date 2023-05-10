cmake_minimum_required(VERSION 3.5)

project(kolmas LANGUAGES C)

add_executable(kolmas main.c)

install(TARGETS kolmas
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR})
