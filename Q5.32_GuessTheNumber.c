#include<stdio.h>
#include<math.h>
#include<time.h>

int main()
{
    char c = 'y';

    while(c == 'y'){
        srand(time(NULL));
        int num = 1 + rand()%1000;

        int n;
        printf("Guess the number (From 1 to 1000): ");
        scanf("%d",&n);
        while(n != num){
            if (n>num){
                printf("Too High, Guess Lower: ");
                scanf("%d",&n);
            }
            else{
                printf("Too Low, Guess Higher: ");
                scanf("%d",&n);
            }
        }
        printf("Excellent! You guessed the right number.\n\nWould you like to play again? (y/n): ");
        scanf("%c");
        scanf("%c",&c);
    }

    return 0;
}
