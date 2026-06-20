#include "loopDoubleLinkList.h"

#include <stdio.h>
#include <stdlib.h>

Node_double *init_loopDoubleLinkList() {
    Node_double *L = malloc(sizeof(Node_double));
    L->data = 0;
    L->pre = L;
    L->next = L;
    return L;
}


void insert_loopDoubleHead(Node_double *L, int data) {
    Node_double *node = malloc(sizeof(Node_double));
    node->data = data;
    if (L->data == 0) {
        //空
        node->pre = L;
        node->next = L->next;
        L->next = node;
        L->pre = node;
        L->data++;
    } else {
        node->pre = L;
        node->next = L->next;
        L->next->pre = node;
        L->next = node;
        L->data++;
    }
}

void insert_loopDoubleTail(Node_double *L, int data) {
    Node_double *new = malloc(sizeof(Node_double));
    new->data = data;
    Node_double *node = L->next;
    if (L->data == 0) {
        new->next = L->next;
        L->next = new;
        L->pre = new;
        new->pre = L;
        L->data++;
    } else {
        while (node->next != L) {
            node = node->next;
        }
        new->next = node->next;
        new->pre = node;
        node->next = new;
        L->data++;
    }
}

void print_loopDoubleList(Node_double *L) {
    Node_double *node = L->next;
    while (node != L) {
        printf("%d ", node->data);
        node = node->next;
    }
    printf("\n");
}

int delete_loopDoubleList(Node_double *L, int data) {
    Node_double *node = L->next;
    while (node->next != L) {
        if (node->data == data) {
            node->pre->next = node->next;
            if (node->next) {
                node->next->pre = node->pre;
            }
            free(node);
            L->data--;
            return TRUE;
        }
        node = node->next;
    }
    return FALSE;
}
