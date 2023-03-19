#include<stdio.h>

int main()
{
    // Taking integer input
    int a;
    printf("Enter an integer: ");
    scanf("%d",&a);

    // If Else statement to print result as per requirement
    if (a%2 == 0){
        printf("The number is Even.");
    }
    else{
        printf("The number is Odd.");
    }

    return 0;
}
