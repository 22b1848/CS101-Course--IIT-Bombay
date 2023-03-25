#include<stdio.h>

int main()
{
    // Initializing variables
    int counter=1;
    unsigned int number,first_number=0,second_number=0;

    // Running a loop to update largest and second largest number as per requirement
    while(counter<=10){

        // Taking input number
        printf("Enter number: ");
        scanf("%u",&number);

        // if-else statement to update the 2 largest numbers if required
        if (number > first_number){
            second_number = first_number;
            first_number = number;
        }
        else if (number > second_number){
            second_number = number;
        }
        counter++;
    }
    // Printing the highest and second highest number
    printf("\nThe highest number entered was %u,\nand\nThe second highest number entered was %u.\n",first_number,second_number);
    return 0;
}
