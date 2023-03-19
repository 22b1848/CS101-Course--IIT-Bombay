#include<stdio.h>

int main()
{
    int a,b; // Declaring integer variables
    printf("Enter 2 numbers separated by a space:\n");
    scanf("%d %d",&a,&b); // Taking 2 numbers as input
    printf("\nSum = %d\nProduct = %d\nDifference = %d\nQuotient = %d\nRemainder = %d\n",a+b,a*b,a-b,a/b,a%b); // Giving all required outputs
    return 0;
}
