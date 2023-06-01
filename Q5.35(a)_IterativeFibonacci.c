#include<stdio.h>
#include<math.h>
#include<time.h>

unsigned long long int fibonacci(unsigned int n)
{
    unsigned long long int n1 = 0,n2 = 1,num;
    n--;
    n--;
    while(n > 0){
        num = n1 + n2;
        n1 = n2;
        n2 = num;
        n--;
    }
    return n2;
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
