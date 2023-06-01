#include<stdio.h>
#include<math.h>
#include<time.h>

int main()
{
    srand(time(NULL));
    int die1 = 1 + rand()%6;
    int die2 = 1 + rand()%6;

    int sum = die1 + die2;

    if (sum == 7 || sum == 11){
        printf("The Player wins!!!");
    }
    else if (sum == 2 || sum == 3 || sum == 12){
        printf("Craps! The House Wins!");
    }
    else {
        int sum1 = 0;
        while(sum1 != sum && sum1 != 7){
            int die3 = 1 + rand()%6;
            int die4 = 1 + rand()%6;
            sum1 = die3 + die4;
        }
        if (sum1 == 7){
            printf("The House wins!");
        }
        else{
            printf("The Player wins!!!");
        }
    }
    return 0;
}
