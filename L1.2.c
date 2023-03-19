#include<stdio.h>

int main()
{
    float a, b, h;
    printf("Enter 3 numbers separated by spaces:\n");
    scanf("%f %f %f", &a, &b, &h);
    float area = (a+b)*h/2;
    printf("The area of the Trapezium is %.2f.", area);
    return 0;
}
