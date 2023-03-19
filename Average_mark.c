#include<stdio.h>

int main()
{
    int grade,sum=0,i=0;
    while(i<10){
        printf("Enter grade: ");
        scanf("%d",&grade);
        sum = sum + grade;
        i++;
    }
    float avg = sum/i
    printf("Class average is %d",avg);
    return 0;
}
