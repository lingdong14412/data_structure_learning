//
// Created by LJZGDPU on 2026/6/8.
//

#include <stdlib.h>
#include <string.h>

char* str_reverser(char *str) {
    int len=strlen(str);
    char *tempstr;
    tempstr=(char*)malloc(len*sizeof(char));

    int L=0,R=len-1;
    while (str[L]!='\0') {
        tempstr[R]=str[L];
        L++;
        R--;
    }
    return tempstr;
}
