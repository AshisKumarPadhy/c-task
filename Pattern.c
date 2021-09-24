/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()  {

   int n,i,j;

   printf("Enter number of rows - ");

   scanf("%d",&n);

   for(i=1;i<=n;i++)   {

       for(j=0;j<2*i;j++)

           printf("%d",j%2);

       printf("\n");

   }

   return 0;

}