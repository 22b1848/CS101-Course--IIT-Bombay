#include<stdio.h>

int main()
{
    // Taking integer input up to which the table is to be made
    int num;
    printf("Enter number till which table is to be made: ");
    scanf("%d",&num);

    // Making the heading of the table
    printf("\n");
    printf("N\tN^2\tN^3\tN^4\n\n");

    // Initializing counter variable
    int i=1;

    // Running a loop to print the rows of numbers
    while(i<=num){
        printf("%d\t%d\t%d\t%d\n", i, i*i, i*i*i, i*i*i*i);
        i++;
    }
    return 0;
}
