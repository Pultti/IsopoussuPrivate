cmake_minimum_required(VERSION 3.5)

project(toka LANGUAGES C)

add_executable(toka main.c)

install(TARGETS toka
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR})
