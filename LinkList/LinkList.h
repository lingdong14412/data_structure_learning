#ifndef C23_LINKLIST_H
#define C23_LINKLIST_H
#include <stdio.h>
#include <stdlib.h>
#define FALSE 0
#define TRUE 1
typedef struct Node {
    int data;
    struct Node *next;
}Node;

Node *initList() ;

void printList(Node *L) ;

void insertHead(Node* L,int data) ;

int deleteNode(Node* L,int data) ;

void insertTail(Node* L,int data) ;

Node*reverseList(Node* L) ;
#endif //C23_LINKLIST_H
