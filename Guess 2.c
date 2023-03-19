#include<stdio.h>

int main()
{
    int a = 420;
    int b;
    char Ans = "Yes";
    char Result = "Yes";
    char A[3];
    printf("Guess the Number! (It is between 0 and 1000.)\n");
    while (Ans == Result){
    a = 420;
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
                printf("Yay! You guessed the right number.\n");
                printf("Do you want to play again? (Yes/No)\n");
                scanf("%s", &A);
                Ans = A;
                a = a+1;
            }
        }

    }
    return 0;
}

