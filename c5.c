#include <stdio.h>
int main() {
   int i, space, rows = 5, k = 0;
   for (i = 1; i <= rows; ++i, k = 0) {
      for (space = rows; space >= i; --space) {
         printf("  ");
      }
      while (k != 2 * i - 1) {
         printf("* ");
         ++k;
      }
      printf("\n");
   }
   return 0;
}

/************************************

9.5 result

        *        
      * * *      
    * * * * *    
  * * * * * * *  
* * * * * * * * *

*************************************/