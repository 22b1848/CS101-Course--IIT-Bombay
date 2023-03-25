#include<stdio.h>

int main()
{
    // Initializing variables
    int i = 1, j, num;

    // Taking input for number of rows/columns
    printf("Enter number of rows/columns in pattern: ");
    scanf("%d", &num);

    // Running an outer loop to print the asterisks
    while(i<=num){

        // if-else statement to add some space before even numbered rows
        if (i%2 != 0){
            j = 1;
            // Running an inner loop to print the row
            while(j<=num){
                printf("* ");
                j++;
            }
        }
        else{
            j = 1;
            printf(" ");
            // Running an inner loop to print the row
            while(j<=num){
                printf("* ");
                j++;
            }
        }
        i++;
        puts(""); // Line break to change the row
    }
    return 0;
}
