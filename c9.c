#include <stdio.h>
int main() {
   int i, j, N = 3;
    for(i=1; i<=N; i++)
    {
        for(j=1; j<=(i * 2 - 1); j++)
        {
            printf("%d", j);
        }
        printf("\n");
    }
    for(i=N-1; i>=1; i--)
    {
        for(j=1; j<=(i * 2 - 1); j++)
        {
            printf("%d", j);
        }
        printf("\n");
    }
   return 0;
}

/************************************

9.9 result

1
123
12345
123
1

*************************************/