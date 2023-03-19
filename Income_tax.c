#include<stdio.h>

int main()
{
    int income;
    printf("Enter your income: ");
    scanf("%d", &income);
    float interest;
    if (income<=250000){
        interest = 0;
    }
    else if (income>=250001 && income<=500000){
        interest = (income-250000)/20;
    }
    else if (income>=500001 && income<=1000000){
        interest = (250000/20)+((income-500000)/5);
    }
    else {
        interest = (250000/20)+(500000/5)+((income-1000000)*3/10);
    }
    printf("%.0f", interest);
    return 0;
}
