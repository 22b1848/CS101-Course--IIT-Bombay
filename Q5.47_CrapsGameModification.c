#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<time.h>

int RollDice(void){
    int die1 = 1 + rand()%6;
    int die2 = 1 + rand()%6;
    printf("Player rolled %d + %d = %d.\n",die1,die2,die1+die2);
    return (die1 + die2);
}

enum gamestatus {WON, LOST, CONTINUE};

enum gamestatus play(void){
    enum gamestatus status;
    int roll = RollDice();
    int point;
    switch(roll){
        case 7:
        case 11:
            printf("Cheers! Player Won!\n");
            status = WON;
            break;

        case 2:
        case 3:
        case 12:
            printf("Craps! Player Lost.\n");
            status = LOST;
            break;

        default:
            status = CONTINUE;
            point = roll;
            printf("Point is %d.\n",roll);
            break;
    }
    while (status == CONTINUE){
        roll = RollDice();
        if (roll == point){
            status = WON;
        }
        else if (roll == 7){
            status = LOST;
        }
    }
    puts("");
    return status;
}

int main()
{
    srand(time(NULL));

    int bankBalance = 1000;
    printf("You are starting with 1000 Dollars. Bet wisely! :)\n");

    enum gamestatus result;

    while(bankBalance > 0){

        int wager;
        printf("\nEnter wager for current round (Should be < balance)(-1 to end): ");
        scanf("%d",&wager);

        if (wager == -1){
            break;
        }

        while(wager > bankBalance){
            printf("Invalid Wager, Wager should be less than Bank Balance (%d). Enter again: ",bankBalance);
            scanf("%d",&wager);
        }

        result = play();

        if (result == WON){
            bankBalance += wager;
            printf("YOU WIN! Your Bank Balance increases to %d.\n",bankBalance);
        }
        else if (result == LOST){
            bankBalance -= wager;
            printf("Haha LOSER! Your Bank Balance decreases to %d.\n",bankBalance);
        }

        if (bankBalance > 4000 && result == WON){
            printf("You're up big, Now is the time to cash in your chips!\n");
        }
        else if (bankBalance < 500 && result == LOST){
            printf("Oh! you're going for broke, huh!\n");
        }
        else if (bankBalance > 2000 && result == WON){
            printf("You're winning, Take your chances dude!\n");
        }

    }
    if (bankBalance == 0){
        printf("Sorry. You Busted! :D");
    }
    else{
        printf("Here you go $%d\nVisit us again!",bankBalance);
    }
}
