#include<stdio.h>

int check7(int x)
{
    int test = 0;
    while(x > 0 && test == 0){
        if (x%10 == 7){
            test++;
        }
        else{
            x = x/10;
        }
    }
    return test;
}

int main()
{
    int num;
    printf("Enter the limit for the game: ");
    scanf("%d", &num);
    int i = 1;
    while(i <= num){
        if (i % 7 == 0 || check7(i) != 0){
            printf("CLAP\n");
        }
        else {
            printf("%d\n", i);
        }
        i++;
    }
    return 0;
}
