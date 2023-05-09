cmake_minimum_required(VERSION 3.5)

project(schoolfirsts LANGUAGES C)

add_executable(schoolfirsts main.c)

install(TARGETS schoolfirsts
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR})
