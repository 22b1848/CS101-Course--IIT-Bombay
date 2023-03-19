#include<stdio.h>

int main()
{
    int n;
    printf("Enter an even number n: ");
    scanf("%d", &n);
    int a = 1;
    int b = 2;
    do{
        a=a*b;
        b=b+2;
    } while(b<=n);
    printf("%d",a);
    return 0;
}
