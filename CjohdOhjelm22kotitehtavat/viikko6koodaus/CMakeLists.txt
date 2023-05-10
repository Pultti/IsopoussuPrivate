cmake_minimum_required(VERSION 3.5)

project(viikko6koodaus LANGUAGES C)

add_executable(viikko6koodaus main.c)

install(TARGETS viikko6koodaus
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR})
