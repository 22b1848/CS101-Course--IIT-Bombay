#include<stdio.h>

int main()
{
    // Initializing all input and output variables
    int test=0;
    double r,d,c,a,pi=3.14159; // Taking double type variables to increase accuracy of output

    // Running a loop to calculate the values multiple times until input -1 is entered
    while(test==0){

        // Taking Radius as input
        printf("Enter the radius of the circle (-1 to end): ");
        scanf("%lf",&r);

        // if statement to stop the loop if -1 is entered
        if (r == -1){
            test++;
        }
        // else statement to calculate and print outputs as per input
        else{
            d=2*r;
            c=2*pi*r;
            a=pi*r*r;
            printf("Diameter = %lf\nCircumference = %lf\nArea = %lf\n\n",d,c,a);
        }
    }
    return 0;
}
