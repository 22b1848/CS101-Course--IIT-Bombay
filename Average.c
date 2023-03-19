#include<stdio.h>

int main()
{
    float sum=0,grade=0,i=0;

    while(grade != -1){
        printf("Enter grade, -1 to end: ");
        scanf("%f",&grade);
        if (grade != -1){
            sum = sum + grade;
            i++;
        }
    }
    float avg = sum/i;
    if(sum>0){
        printf("Class average is %.2f", avg);
    }
    else{
        printf("No grades were entered.");
    }
    return 0;
}
