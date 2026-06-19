#ifndef C23_LINKLIST_H
#define C23_LINKLIST_H
#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int data;
    struct Node *next;
}Node;

Node *initList() ;

void printList(Node *L) ;

void insertHead(Node* L,int data) ;


#endif //C23_LINKLIST_H
