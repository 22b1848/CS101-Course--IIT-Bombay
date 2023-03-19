#include<stdio.h>

int main()
{
    long long int a,b,m,num = 1LL;
    printf("Enter 3 numbers separated by spaces: ");
    scanf("%lld %lld %lld",&a,&b,&m);
    while(b>0){
        num = num*a;
        b--;
    }
    printf("Remainder is %lld.", num%m);
    return 0;
}
