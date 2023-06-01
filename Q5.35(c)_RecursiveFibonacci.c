#include<stdio.h>
#include<stdlib.h>

unsigned long long int fibonacci(unsigned int n)
{
    if (n == 1){
        return 0;
    }
    else if(n == 2){
        return 1;
    }
    else return fibonacci(n-1) + fibonacci(n-2);
}

int main()
{
    unsigned int n;
    printf("Enter Fibonacci number to be calculated: ");
    scanf("%u",&n);
    while(n != -1){
        if (n == 1){
            printf("Value = %d",0);
        }
        else printf("Value = %llu",fibonacci(n));

        printf("\n\nEnter Fibonacci number to be calculated: ");
        scanf("%u",&n);
    }
}
