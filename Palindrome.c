#include<stdio.h>

int main (void)
{
    int a, b;
    printf("Enter the Test Number:\n");
    scanf("%d", &a);

    int Original_number = (int)a;
    int Reversed_number = 0;

    while (a > 0)
    {
        b = a%10;
        a = (int)(a/10);
        Reversed_number = 10*Reversed_number + b;
    }
    if (Original_number == Reversed_number)
    {
        printf("%d is a Palindrome", Original_number);
    }
    else
    {
        printf("%d is not a Palindrome", Original_number);
    }
    return 0;
}
