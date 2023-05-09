cmake_minimum_required(VERSION 3.5)

project(vk5koodaus LANGUAGES C)

add_executable(vk5koodaus main.c)

install(TARGETS vk5koodaus
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR})
