#include <stdio.h>
#include<Windows.h>
#include <string.h>
#include "str_reserver.h"
#include "LinkList/LinkList.h"
#include "loopLinkList/loopLinkList.h"
// #include "DoubleLinkList/DoubleLinkList.h"
// #include "loopDoubleLinkList/loopDoubleLinkList.h"
// #include "Stack/Stack.h"

// #include "Queue/Queue.h"

#include "BinaryTree/BinaryTree.h"
int main() {
    // char str[20]={'\0'};
    // int x=123456;
    // sprintf(str,"%d",x);
    // char s[30]="hello";
    // char *str_reversed=str_reverser(str);
    // printf("%s",str_reversed);

    // Node *Head = initList();
    // insertHead(Head, 1);
    // insertHead(Head, 4);
    // insertHead(Head, 8);
    // insertHead(Head, 6);
    // insertHead(Head, 7);
    // insertTail(Head, 9);
    // printList(Head);
    // Node *reversed = reverseList(Head);
    // deleteNode(Head, 8);
    // printList(reversed);

    // Node*loopHead=initloopList();
    // insertloopHead(loopHead,1);
    // insertloopHead(loopHead,2);
    // insertloopHead(loopHead,3);
    // insertloopTail(loopHead,4);
    // insertloopHead(loopHead,5);
    // insertloopHead(loopHead,8);
    //
    // printloopList(loopHead);


    // Node_double *Head = init_DoubleLinklist();
    // insert_DoubleHead(Head, 1);
    // insert_DoubleHead(Head, 3);
    // insert_DoubleHead(Head, 4);
    // insert_DoubleHead(Head, 5);
    // insert_DoubleHead(Head, 8);
    // insert_DoubleHead(Head, 6);
    // insert_DoubleTail(Head, 21);
    //
    // print_DoubleList(Head);
    //
    // delete_DoubleList(Head, 21);
    //
    // print_DoubleList(Head);
    // printf("%d", Head->data);


    // Node_double*Head=init_loopDoubleLinkList();
    // insert_loopDoubleHead(Head,3);
    // insert_loopDoubleHead(Head,7);
    // insert_loopDoubleHead(Head,4);
    // insert_loopDoubleHead(Head,6);
    // insert_loopDoubleTail(Head,9);
    // delete_loopDoubleList(Head,6);
    // print_loopDoubleList(Head);


    // StackNode*Stack=initStack();
    // push(Stack,9);
    // push(Stack,5);
    // push(Stack,7);
    // int a=pop(Stack);
    // int b=pop(Stack);
    // int c=pop(Stack);
    // printf("%d %d %d\n",a,b,c);
    // printStack(Stack);

    // printf("\n%d",isEmpty(Stack));


    // Node*MyQueue=initQueue();
    // enQueue(MyQueue,9);
    // enQueue(MyQueue,5);
    // enQueue(MyQueue,6);
    // enQueue(MyQueue,8);

    // printQueue(MyQueue);

    // deQueue(MyQueue);
    // deQueue(MyQueue);
    //
    // printQueue(MyQueue);
    //
    // deQueue(MyQueue);
    // deQueue(MyQueue);

    // printf("%d",isEmpty_Queue(MyQueue));

    TreeNode*tree;
    int index=0;
    char treeStr[]="ABD###CE###";
    tree=createTree(treeStr,&index);

    preOrder(tree);
    printf("\n");
    inOrder(tree);
    printf("\n");
    postOrder(tree);
    printf("\n");




    return 0;
}
