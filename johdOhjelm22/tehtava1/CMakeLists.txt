cmake_minimum_required(VERSION 3.5)

project(tehtava1 LANGUAGES C)

add_executable(tehtava1 main.c)

install(TARGETS tehtava1
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR})
