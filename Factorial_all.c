#include<stdio.h>

int main()
{
    int n;
    printf("Enter an integer: ");
    scanf("%d", &n);
    int fac = 1;
    int i = 1;
    do {
        fac=fac*i;
        printf("%d\n", fac);
        i++;
    }while(i<=n);
    return 0;
}
