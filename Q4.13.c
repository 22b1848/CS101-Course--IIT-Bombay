#include<stdio.h>

int main()
{
    // Taking max number as input
    int num;
    printf("Enter a number: ");
    scanf("%d",&num);

    // Initializing sum variables
    int sum1=0,sum2=0,sum3=0;

    // Running a loop to update each sum
    while(num>0){
        sum1 += num;
        sum2 += num*num;
        sum3 += num*num*num;
        num--;
    }
    // Printing the various sums as output
    printf("The sum = %d\nThe sum of squares = %d\nThe sum of cubes = %d",sum1,sum2,sum3);
    return 0;
}
