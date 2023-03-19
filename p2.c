#include<stdio.h>

int main(void)
{
    char XYZ[100];
    printf("Hello CS101!\n");
    printf("Enter your name:\n");
    scanf("%s", &XYZ);
    printf("My name is %s.", &XYZ);
    return 0;
}
