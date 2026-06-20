
#ifndef C23_QUEUE_H
#define C23_QUEUE_H

typedef struct Node {
    int data;
    struct Node* next;
}Node;


Node*initQueue() ;

void printQueue(Node*Q);

void enQueue(Node*Q,int data);

int deQueue(Node*Q);

int isEmpty_Queue(Node*Q);


#endif //C23_QUEUE_H
