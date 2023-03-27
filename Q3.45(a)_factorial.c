#include<stdio.h>

int main()
{
    unsigned int num;
    printf("Enter non-negative integer: ");
    scanf("%u",&num);

    unsigned int fact = 1;

    while(num>1){
        fact *= num;
        num--;
    }

    printf("factorial = %u",fact);

    return 0;
}
