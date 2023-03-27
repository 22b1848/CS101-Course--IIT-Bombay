#include<stdio.h>

int main()
{
    double e = 1;
    double prod = 1;
    unsigned int num = 1;

    while(num < 100){
        prod = prod*num;
        e += 1/prod;
        num++;
    }
    printf("e = %.20lf",e);
    return 0;
}
