#include<stdio.h>

int main()
{
    int u,a,t; // Declaring variables

    // Taking Inputs
    printf("Enter the initial velocity and acceleration of an object, and the time that has elapsed:\n");
    scanf("%d %d %d",&u,&a,&t);

    int v = u + a*t; // Calculating Final Velocity
    int s = u*t + a*t*t/2; // Calculating Distance Travelled

    printf("Final Velocity = %d\nDistance Traversed = %d",v,s); // Printing output

    return 0;
}
