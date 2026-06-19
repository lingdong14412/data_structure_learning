#include "loopLinkList.h"

Node *initloopList() {
    Node* L=(Node*)malloc(sizeof(Node));
    L->data=0;
    L->next=L;
    return L;
}

void printloopList(Node *L) {
    Node* node=L->next;
    while(node!=L) {
        printf("%d ",node->data);
        node=node->next;
    }
    printf("\n");
}

void insertloopHead(Node* L,int data) {
    Node* node=(Node*)malloc(sizeof(Node));
    Node *p=L;
    node->data=data;
    node->next=p->next;
    p->next=node;
}

int deleteloopNode(Node*L,int data) {
    Node*preNode=L;
    Node* node=L->next;
    while (node->next!=L) {
        if (node->data==data) {
            preNode->next=node->next;
            free(node);
            return TRUE;
        }
        preNode=node;
        node=node->next;
    }
    return FALSE;
}

void insertloopTail(Node* L,int data) {
    Node*node=(Node*)malloc(sizeof(Node));
    Node *p=L->next;
    while (p->next!=L) {
        p=p->next;
    }
    node->data=data;
    node->next=p->next;
    p->next=node;
}