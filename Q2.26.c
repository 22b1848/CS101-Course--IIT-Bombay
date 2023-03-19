#include<stdio.h>

int main()
{
    // Taking input of 2 integers
    int a,b;
    printf("Enter 2 integers separated by a space: ");
    scanf("%d %d",&a,&b);

    // Running If Else statement to print result as per the given condition
    if (a%b == 0){
        printf("%d is a multiple of %d.",a,b);
    }
    else {
        printf("%d is not a multiple of %d.",a,b);
    }

    return 0;
}
