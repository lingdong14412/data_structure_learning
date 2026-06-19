#include "LinkList.h"

Node *initList() {
    Node* L=(Node*)malloc(sizeof(Node));
    L->data=0;
    L->next=NULL;
    return L;
}

void printList(Node *L) {
    Node* node=L->next;
    while(node!=NULL) {
        printf("%d",node->data);
        node=node->next;
    }
}

void insertHead(Node* L,int data) {
    Node* node=(Node*)malloc(sizeof(Node));
    Node *p=L;
    node->data=data;
    node->next=p->next;
    p->next=node;
}