#include "Queue.h"

#include <stdio.h>
#include <stdlib.h>

Node*initQueue() {
    Node*Q=(Node*)malloc(sizeof(Node));
    Q->data=0;
    Q->next=NULL;
    return Q;
}

int isEmpty_Queue(Node*Q) {
    if (Q->next==NULL||Q->data==0) {
        return 1;
    }
    return 0;
}


void enQueue(Node*Q,int data) {
    Node*q=Q;
    Node*node=malloc(sizeof(Node));
    node->data=data;
    while (q->next!=NULL) {
        q=q->next;
    }
    node->next=q->next;
    q->next=node;
    Q->data++;
}


int deQueue(Node*Q) {
    if (isEmpty_Queue(Q)) {
        return -1;
    }
    Node*node=Q->next;
    int data=node->data;
    Q->next=node->next;
    free(node);
    return data;
}

void printQueue(Node*Q) {
    Node*node=Q->next;
    while (node!=NULL) {
        printf("%d ",node->data);
        node=node->next;
    }
    printf("\n");
}