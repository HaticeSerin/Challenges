//sum of 2 matrices
#include "stdio.h"
 
int main()
{
   int i,j,k,n,f[20][20],s[20][10],sum[20][20];
   printf("Reminder: To sum the matrices, they need to have equal rows and columns.\n");
   printf("Enter the number of rows of matrix\n");
   scanf("%d", &k);
   printf("Enter the number of columns of matrix\n");
   scanf("%d",&n);
   printf("Enter the elements of first matrix\n");
 
   for (i = 0; i < k; i++){
   
      for (j = 0; j < n; j++){
         scanf("%d", &f[i][j]);
       }
    }
 
   printf("Enter the elements of second matrix\n");
 
   for (i = 0; i < k; i++){
      for (j = 0 ; j < n; j++){
         scanf("%d", &s[i][j]);
       }
    }
   printf("Sum of entered matrices:\n");
   
   for (i = 0; i < k; i++) {
      for (j = 0 ; j < n; j++) {
         sum[i][j] = f[i][j] + s[i][j];
         printf("%d\t", sum[i][j]);
        }
      printf("\n");
   }
 
   return 0;
}
