#include<stdio.h>

double fact(int x)
{
    int prod=1;
    while(x>=1){
        prod *= x;
        x--;
    }
    return prod;
}

int main()
{
    double e = 1;
    double n = 1;
    while (n<30){
        e += (1/fact(n));
        n++;
    }
    printf("%.10lf",e);
    return 0;
}
