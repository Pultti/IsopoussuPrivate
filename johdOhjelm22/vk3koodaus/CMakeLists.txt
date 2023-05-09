cmake_minimum_required(VERSION 3.5)

project(vk3koodaus LANGUAGES C)

add_executable(vk3koodaus main.c)

install(TARGETS vk3koodaus
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR})
