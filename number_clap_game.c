#include<stdio.h>

int main()
{
    // Taking input for max number to which game continues
    int num;
    printf("Enter the max number: ");
    scanf("%d", &num);

    // initializing variables
    int a = num;
    int i = 1;

    // Running a loop to print output
    while(i<=num){

        // Printing CLAP when integer is a multiple of 7
        if (i%7 == 0){
            printf("CLAP\n");
        }
        // Printing CLAP when last digit is 7
        else if (i%10 == 7){
            printf("CLAP\n");
        }
        else{
            // Running a loop to check if any other digits are 7 and printing CLAP if that is the case
            int j = 0;
            while(a>0 && j==0){
                a = a/10;
                if (a%10 == 7){
                    j++;
                    printf("CLAP\n");
                }
            }
            // Printing the number if no conditions for CLAP satisfies
            if (j == 0){
                printf("%d\n", i);
            }
        }
        i++;
    }
}
