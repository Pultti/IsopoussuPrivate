cmake_minimum_required(VERSION 3.5)

project(vk4koodaus LANGUAGES C)

add_executable(vk4koodaus main.c)

install(TARGETS vk4koodaus
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR})
