#include "DoubleLinkList.h"

Node_double *init_DoubleLinklist() {
    Node_double *L = malloc(sizeof(Node_double));
    L->data = 0;
    L->pre = NULL;
    L->next = NULL;
    return L;
}


void insert_DoubleHead(Node_double *L, int data) {
    Node_double *node = malloc(sizeof(Node_double));
    if (L->next == NULL) {
        //链表为空
        node->data = data;
        node->next = L->next;
        L->next = node;
        L->data++;
    } else {
        node->data = data;
        node->next = L->next;
        node->pre = L->next->pre;
        L->next->pre = node;
        L->next = node;

        L->data++;
    }
}

void insert_DoubleTail(Node_double *L, int data) {
    Node_double *node = L->next;
    Node_double *new = (Node_double*)malloc(sizeof(Node_double));
    new->data = data;
    while (node->next != NULL) {
        node = node->next;
    }
    new->next = node->next;
    new->pre=node;
    node->next = new;
    L->data++;
}

int delete_DoubleList(Node_double *L, const int data) {
    Node_double *node = L->next;

    while (node) {
        if (node->data == data) {
            // 1. 安全断开连接
            node->pre->next = node->next;
            if (node->next != NULL) {
                node->next->pre = node->pre;
            }

            // 2. 【核心】在 free 之前，先保存下一个节点的地址
            Node_double *temp = node->next;

            // 3. 释放内存
            free(node);
            L->data--;

            // 4. 【核心】让 node 指向保存的下一个节点，而不是去访问已释放的内存
            node = temp;

            return TRUE;
        }
        // 如果当前节点不是要删除的，正常向后遍历
        node = node->next;
    }
    return FALSE;
}


void print_DoubleList(Node_double *L) {
    Node_double *node = L->next;
    while (node != NULL) {
        printf("%d ", node->data);
        node = node->next;
    }
    printf("\n");
}
