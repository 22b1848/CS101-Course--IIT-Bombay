#include<stdio.h>

int main()
{
    int a,b;
    printf("Enter 2 numbers separated by a space:\n");
    scanf("%d %d",&a,&b);
    a = a+b;
    b = a-b;
    a = a-b;
    int c = a;
    int d = 0;
    do{
        d = d + c;
    } while (c>=0);
    int result = d%b;
    printf("%d %d %d",a,b,result);
    return 0;
}
