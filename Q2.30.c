#include<stdio.h>

int main()
{
    // Taking integer input
    int num;
    printf("Enter the number whose digits are to be separated:\n");
    scanf("%d",&num);

    int revnum = 0; // Declaring another variable to be updated in the loop

    // Running a reverse the number
    while(num>0){
        revnum = revnum*10 + (num%10);
        num = (int)(num/10);
    }

    // Running a loop to print the digits of original number in sequence
    while(revnum>0){
        int r = revnum%10;
        revnum = (int)(revnum/10);
        printf("%d  ",r);
    }
    /* Logic: The remainder of a number when divided by 10 gives the last digit of the number.
        Issues: We have to first reverse the number to print the digits in sequence of original number because the method used prints last digit first. */
    return 0;
}
