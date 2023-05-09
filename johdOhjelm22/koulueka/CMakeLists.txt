cmake_minimum_required(VERSION 3.5)

project(koulueka LANGUAGES C)

add_executable(koulueka main.c)

install(TARGETS koulueka
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR})
