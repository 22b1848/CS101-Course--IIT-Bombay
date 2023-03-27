#include<stdio.h>

int main()
{
    int a,b,c;
    printf("Enter the sides of a triangle separated by a space: ");
    scanf("%d %d %d",&a,&b,&c);

    if (a+b>c && b+c>a && a+c>b)
        printf("The numbers REPRESENT the sides of a triangle.");
    else
        printf("The numbers DO NOT REPRESENT the sides of a triangle.");

    return 0;
}
