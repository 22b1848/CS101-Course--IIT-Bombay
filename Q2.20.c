#include<stdio.h>

int main()
{
    int time; // Declaring a variable for time

    //Taking input of time in seconds
    printf("Enter the Total time elapsed in seconds: ");
    scanf("%d",&time);

    // Transforming time into Hours, minutes and seconds
    int sec = time%60;
    time = (time-sec)/60;
    int mins = time%60;
    int hours = (time-mins)/60;

    printf("%d:%d:%d",hours,mins,sec); // Printing Required output in the format given
    return 0;
}
