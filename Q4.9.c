#include<stdio.h>

int main()
{
    // Initializing counter variables
    int i,j=0;

    // Taking number of integers to be entered as input
    printf("Enter the number of Integers: ");
    scanf("%d",&i);

    // Initializing variables to calculate sum and take input integers
    float sum=0;
    int num;

    // Running a loop to take input and update sum
    while (i>0){
        printf("Enter integer: ");
        scanf("%d",&num);
        sum += num;
        i--; // To reduce the counter variable and stop the loop
        j++; // To calculate the total number of integers and divide the sum to get average
    }
    // Printing outputs of Sum and Average
    printf("The sum of integers entered is %.2f.\n",sum);
    printf("The average of integers entered is %.2f.",sum/j);

    return 0;
}
