#include<stdio.h>

int main(void)
{
    int x;
    printf("Enter a number:\n");
    scanf("%d", &x);
    printf("%d is the square of %d.", x*x, x);
    return 0;
}
