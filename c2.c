#include <stdio.h>
int main() {
   int i, j, rows = 5;
   for (i = 1; i <= rows; ++i) {
      for (j = 1; j <= i; ++j) {
         printf("%d",i);
      }
      printf("\n");
   }
   return 0;
}

/************************************

9.2 result

1
22
333
4444
55555

*************************************/