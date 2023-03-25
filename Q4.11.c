#include<stdio.h>

int main()
{
    // Initializing variables
    int i=1,sum=0;

    // Running a loop to calculate sum of integers till 100 which are multiples of 7
    while(i<=100){

        // Updating the sum when integer is a multiple of 7
        if(i%7==0){
            sum += i;
        }
        i++;
    }
    // Printing the output
    printf("The required sum of multiples of 7 is %d.",sum);
    return 0;
}
