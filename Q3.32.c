#include<stdio.h>

int main()
{
    // Taking input of side of square
    int num;
    printf("Enter side of square: ");
    scanf("%d",&num);

    // Running an outer loop to print the rows
    int i=1;
    while(i<=num){

        // Running an inner loop to print a single row
        int j=1;
        while(j<=num){
            printf("* ");
            j++;
        }
        printf("\n"); // Changing the row by adding a line break
        i++;
    }
    return 0;
}
