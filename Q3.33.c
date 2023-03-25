#include<stdio.h>

int main()
{
    /* Taking the length of side of hollow square as input */
    int num;
    printf("Enter size of square: ");
    scanf("%d", &num);

    // Running loops for side not equal to 1 because the code in it doesn't work for side 1
    if (num != 1){
        int i=1;

        // Printing first row
        while(i <= num){
            printf("* ");
            i++;
        }
        // Printing the rows which should have only first and last asterisk
        int j=2;
        while(j<num){
            printf("\n* ");
            int k=2;
            while(k<num){
                printf("  ");
                k++;
            }
        printf("*");
        j++;
        }
        // Printing last row
        i=1;
        printf("\n");
        while(i <= num){
            printf("* ");
            i++;
        }
    }
    // Printing square of side 1 if 1 is entered
    else if (num == 1){
        printf("*");
    }
}
