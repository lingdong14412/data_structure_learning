#include <stdlib.h>
#include <string.h>
#include <iso646.h>
#include "str_reverser.h"
char *str_reverser(char *str)
{
    int len = strlen(str);
    char *tempstr = (char *)malloc(len);

    int L = 0, R = len - 1;

    while (str[L] != '\0' and R >= 0)
    {
        tempstr[R] = str[L];
        L++;
        R--;
    }

    return tempstr;
}
