#include <stdio.h>
int main() {
   int i, j, rows = 5;
   for (i = 1; i <= rows; ++i) {
      for (j = rows; j >= i; --j) {
         printf("* ");
      }
      printf("\n");
   }
   return 0;
}

/************************************

9.1 result

*****
****
***
**
*

*************************************/