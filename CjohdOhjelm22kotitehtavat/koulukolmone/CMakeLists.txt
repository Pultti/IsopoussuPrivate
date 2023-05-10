cmake_minimum_required(VERSION 3.5)

project(koulukolmone LANGUAGES C)

add_executable(koulukolmone main.c)

install(TARGETS koulukolmone
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR})
