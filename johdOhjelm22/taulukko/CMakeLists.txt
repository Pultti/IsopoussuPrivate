cmake_minimum_required(VERSION 3.5)

project(taulukko LANGUAGES C)

add_executable(taulukko main.c)

install(TARGETS taulukko
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR})
