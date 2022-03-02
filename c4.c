#include <stdio.h>
int main() {
   int i, j, rows = 5;
    for(i=1;i<=rows;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("%c",'A' + j-1);
        }
        printf("\n");
    }
   return 0;
}

/************************************

9.4 result

A
AB
ABC
ABCD
ABCDE

*************************************/