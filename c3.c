#include <stdio.h>
int main() {
   int i, j, N = 5;
    for(i=1; i<=N; i++)
    {
        for(j=i; j<N; j++)
        {
            printf(" ");
        }
        for (j = 1; j <= i; ++j) 
        {
            printf("%d", j);
        }
        printf("\n");
    }
   return 0;
}

/************************************

9.3 result

    1
   12
  123
 1234
12345

*************************************/