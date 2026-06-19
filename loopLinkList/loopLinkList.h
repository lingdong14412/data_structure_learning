#ifndef C23_LOOPLINKLIST_H
#define C23_LOOPLINKLIST_H

#include <stdio.h>
#include <stdlib.h>
#define FALSE 0
#define TRUE 1
typedef struct Node {
    int data;
    struct Node *next;
}Node;

Node *initloopList() ;

void printloopList(Node *L) ;

void insertloopHead(Node* L,int data) ;

int deleteloopNode(Node* L,int data) ;

void insertloopTail(Node* L,int data);
#endif //C23_LOOPLINKLIST_H
