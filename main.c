#include <stdio.h>
#include<Windows.h>
#include <string.h>
#include "str_reserver.h"
#include "LinkList/LinkList.h"

int main() {
    // char str[20]={'\0'};
    // int x=123456;
    // sprintf(str,"%d",x);
    // char s[30]="hello";
    // char *str_reversed=str_reverser(str);
    // printf("%s",str_reversed);

    Node*Head=initList();
    insertHead(Head,1);
    insertHead(Head, 4);
    insertHead(Head,6);

    printList(Head);

    return 0;
}
