#include<stdio.h>

int main()
{
    int num1,num2;
    printf("Enter 2 numbers:\n");
    scanf("%d", &num1);
    scanf("%d", &num2);
    float sum, dif, prod, quo;
    sum = num1 + num2;
    dif = num1 - num2;
    prod = num1*num2;
    quo = num1/num2;
    printf("%.2f %.2f %.2f %.2f", sum, dif, prod, quo);
    return 0;
}
