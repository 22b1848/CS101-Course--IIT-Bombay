#include<stdio.h>

int main()
{
    int n;
    printf("Enter an integer:\n");
    scanf("%d", &n);
    int fac = 1;
    do {
        fac = fac*n;
        n--;
    } while(n>0);
    printf("%d", fac);
}
