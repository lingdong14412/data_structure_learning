#include <stdio.h>
#include<Windows.h>
#include <string.h>
#include "str_reserver.h"
#include "LinkList/LinkList.h"
#include "loopLinkList/loopLinkList.h"
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
    // insertTail(Head,9);
    // printList(Head);
    // deleteNode(Head, 8);
    // printList(Head);

    Node*loopHead=initloopList();
    insertloopHead(loopHead,1);
    insertloopHead(loopHead,2);
    insertloopHead(loopHead,3);
    insertloopTail(loopHead,4);
    insertloopHead(loopHead,5);
    insertloopHead(loopHead,8);

    printloopList(loopHead);

    return 0;
}
