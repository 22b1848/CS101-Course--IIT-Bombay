#include<stdio.h>

int main()
{
    // Initializing variables
    int counter=0;
    unsigned int number,largest=0;

    // Running a loop to take inputs
    while(counter<10){
        printf("Enter number: ");
        scanf("%u",&number);

        // Updating the variable largest if the number entered is the largest
        if(number>=largest){
            largest = number;
        }
        counter++;
    }
    // Printing the output of largest number
    printf("The largest number found is %u.",largest);
    return 0;
}
