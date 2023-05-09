cmake_minimum_required(VERSION 3.5)

project(eka LANGUAGES C)

add_executable(eka main.c)

install(TARGETS eka
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR})
