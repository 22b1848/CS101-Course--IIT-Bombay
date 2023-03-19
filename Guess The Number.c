#include<stdio.h>

int main()
{
    int a = 420;
    int b;
    printf("Guess the Number! (It is between 0 and 1000.)\n");
    while (a == 420)
    {
        scanf("%d", &b);
        if (b > a)
        {
            int c;
            printf("Wrong number, Guess Lower:\n");
            b = c;
        }
        else if (b < a)
        {
            int c;
            printf("Wrong number, Guess Higher:\n");
            b = c;
        }
        else
        {
            printf("Yay! You guessed the right number.");
            a = a+1;
        }
    }
    return 0;
}
