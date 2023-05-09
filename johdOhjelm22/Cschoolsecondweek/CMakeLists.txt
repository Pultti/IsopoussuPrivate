cmake_minimum_required(VERSION 3.5)

project(Cschoolsecondweek LANGUAGES C)

add_executable(Cschoolsecondweek main.c)

install(TARGETS Cschoolsecondweek
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR})
