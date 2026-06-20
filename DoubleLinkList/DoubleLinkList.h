#ifndef C23_DOUBLELINKLIST_H
#define C23_DOUBLELINKLIST_H

#define TRUE 1
#define FALSE 0
typedef struct Node_double {
    int data;
    struct Node_double *pre;
    struct Node_double *next;
} Node_double;

Node_double *init_DoubleLinkList();

void insert_DoubleHead(Node_double *L, int data) ;

void insert_DoubleTail(Node_double*L,int data);

void print_DoubleList(Node_double *L);

int delete_DoubleList(Node_double*L,int data);

#endif //C23_DOUBLELINKLIST_H
