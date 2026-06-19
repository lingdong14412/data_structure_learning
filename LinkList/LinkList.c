#include "LinkList.h"

Node *initList() {
    Node *L = (Node *) malloc(sizeof(Node));
    L->data = 0;
    L->next = NULL;
    return L;
}

void printList(Node *L) {
    Node *node = L->next;
    while (node != NULL) {
        printf("%d ", node->data);
        node = node->next;
    }
    printf("\n");
}

void insertHead(Node *L, int data) {
    Node *node = (Node *) malloc(sizeof(Node));
    Node *p = L;
    node->data = data;
    node->next = p->next;
    p->next = node;
}

int deleteNode(Node *L, int data) {
    Node *preNode = L;
    Node *node = L->next;
    while (node->next != NULL) {
        if (node->data == data) {
            preNode->next = node->next;
            free(node);
            return TRUE;
        }
        preNode = node;
        node = node->next;
    }
    return FALSE;
}

void insertTail(Node *L, int data) {
    Node *node = (Node *) malloc(sizeof(Node));
    Node *p = L->next;
    while (p->next != NULL) {
        p = p->next;
    }
    node->data = data;
    node->next = p->next;
    p->next = node;
}


Node *reverseList(Node *L) {
    Node *prev = L->next;
    Node *curr=L->next->next;
    Node *next=NULL;
    prev->next=NULL;

    while (curr!=NULL) {
        next=curr->next;
        curr->next=prev;
        prev=curr;
        curr=next;

    }
    L->next=prev;
    return L;
}
