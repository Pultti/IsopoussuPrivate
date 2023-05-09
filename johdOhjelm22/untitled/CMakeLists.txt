cmake_minimum_required(VERSION 3.5)

project(untitled LANGUAGES C)

add_executable(untitled main.c)

install(TARGETS untitled
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR})
