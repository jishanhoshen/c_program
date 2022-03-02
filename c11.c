#include <stdio.h>
int main() {
   int i,n = 6,j;
   for(i=0;i<n;i++)
   {
      for(j=0;j<n;j++)
      {
         if(i==0||i+j==n-1||i==n-1)
         {
            printf("*");
         }
         else
         {
            printf(" ");
         }
      }
      printf("\n");
   }
   return 0;
}

/************************************

9.11 result

******
    * 
   *  
  *   
 *    
******

*************************************/
