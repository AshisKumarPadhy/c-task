/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    switch(n)
    {
        case 1:if(n=1)
        printf("Food Item - Pizza") ;
        printf("\nPrice - Rs 239");
        break;
        case 2: if(n=2)
        printf("Food Item - Burger ");
        printf("\nPrice - Rs 129");
        break;
        case 3: if(n=3)
        printf("Food Item - Pasta");
        printf("\nPrice - Rs 179");
        break;
        case 4:if(n=4)
        printf("Food Item - French Fries");
        printf("\nPrice - Rs 99");
        break;
        case 5:if(n=5)
        printf("Food Item - Sandwich");
        printf("\nPrice - Rs 149");
        break;
    
    default:
    printf("No");
}
}