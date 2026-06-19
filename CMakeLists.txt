cmake_minimum_required(VERSION 4.2)
project(c23 C)

set(CMAKE_C_STANDARD 23)

add_executable(c23 main.c
        str_reverser.c
        str_reserver.h
        LinkList/LinkList.h
        LinkList/LinkList.c)
