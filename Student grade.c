/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int a;
    scanf("%d",&a);
    if(a>= 85 && a<100)
    printf("Grade A");
    else if(a>=70 && a<84)
    printf("Grade B");
    else if(a>=55 && a<69)
    printf("Grade C");
    else if(a>=40 && a<54)
    printf("Grade D");
    else
    printf("Grade F");
}
