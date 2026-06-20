
#ifndef C23_SATCK_H
#define C23_SATCK_H


typedef struct StackNode {
    int data;
    struct StackNode*next;
}StackNode;

StackNode*initStack() ;

int isEmpty(StackNode*S) ;

int pop(StackNode*S) ;

void push(StackNode*S,int data) ;

void printStack(StackNode*S);




#endif //C23_SATCK_H
