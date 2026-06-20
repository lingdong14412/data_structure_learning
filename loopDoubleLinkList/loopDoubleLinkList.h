
#ifndef C23_LOOPDOUBLELINKLIST_H
#define C23_LOOPDOUBLELINKLIST_H

#define TRUE 1
#define FALSE 0
typedef struct Node_double {
    int data;
    struct Node_double *pre;
    struct Node_double *next;
} Node_double;

Node_double *init_loopDoubleLinkList();

void insert_loopDoubleHead(Node_double *L, int data) ;

void insert_loopDoubleTail(Node_double*L,int data);

void print_loopDoubleList(Node_double *L);

int delete_loopDoubleList(Node_double*L,int data);


#endif //C23_LOOPDOUBLELINKLIST_H
