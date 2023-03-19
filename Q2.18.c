#include<stdio.h>

int main()
{
    float h,c; // Declaring variables

    // Taking input for highest rainfall
    printf("Enter the highest rainfall: ");
    scanf("%f",&h);

    // Taking input for current rainfall
    printf("Enter the current rainfall: ");
    scanf("%f",&c);

    // If Current rainfall is more than highest rainfall, then current fall becomes highest
    if(c>h){
        h = c;
        printf("Current rainfall is the highest rainfall and is equal to %.2f.",h);
    }
    // If Current rainfall is not the highest
    else{
        printf("Current rainfall is not the highest and is equal to %.2f.",c);
    }
    return 0;
}
