#include "Stack.h"

#include <stdio.h>
#include <stdlib.h>

StackNode *initStack() {
    StackNode *S = malloc(sizeof(StackNode));
    S->data = 0;
    S->next = NULL;
    return S;
}

int isEmpty(StackNode *S) {
    if (S->data == 0 || S->next == NULL) {
        return 1;
    }
    return 0;
}

int pop(StackNode *S) {
    if (isEmpty(S)) {
        return -1;
    }
    StackNode *temp = S->next;
    int data = temp->data;
    S->next = S->next->next;
    free(temp);
    S->data--;
    return data;
}

void push(StackNode *S, int data) {
    StackNode *node = malloc(sizeof(StackNode));
    node->data = data;
    node->next = S->next;
    S->next = node;
    S->data++;
}

void printStack(StackNode *S) {
    if (!isEmpty(S)) {
        StackNode *node = S->next;
        while (node != NULL) {
            printf("%d ", node->data);
            node = node->next;
        }
        free(node);
    }
}
