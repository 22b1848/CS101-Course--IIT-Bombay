#include<stdio.h>
#include<math.h>

int main()
{
    double a;
    int p = 1000;

    double rate = 5;
    printf("%5s %25s\n","Year","Amount in Account");

    for (unsigned int counter = 1; counter <= 10; ++counter){
        a = p*pow(1+rate/100,counter);
        printf("%5u %25lf\n",counter,a);
    }
}
