#include<stdio.h>

int main()
{
    int a,r,k;
    printf("Enter 3 integers separated by Spaces:\n");
    scanf("%d %d %d", &a, &r, &k);
    int b,c,num1,num2;
    b = k;
    c = 1;
    while (b>1)
    {
        c = c*r;
        b--;
    }
    num1 = a*c;
    while (b>=1)
    {
        c = c*r;
        b--;
    }
    num2 = a*c;
    int sum = num1 + num2;
    printf("%d", sum);
    return 0;
}
