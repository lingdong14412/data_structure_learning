cmake_minimum_required(VERSION 4.2)
project(c23 C)

set(CMAKE_C_STANDARD 23)

add_executable(c23 main.c
        str_reverser.c
        str_reserver.h
        LinkList/LinkList.h
        LinkList/LinkList.c
        loopLinkList/loopLinkList.c
        loopLinkList/loopLinkList.h
        DoubleLinkList/DoubleLinkList.h
        DoubleLinkList/DoubleLinkList.c
        loopDoubleLinkList/loopDoubleLinkList.h
        loopDoubleLinkList/loopDoubleLinkList.c
        stack/stack.h
        stack/stack.c
        Queue/Queue.h
        Queue/Queue.c
        BinaryTree/BinaryTree.h
        BinaryTree/BinaryTree.c)
