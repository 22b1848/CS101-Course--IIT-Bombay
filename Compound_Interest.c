#include<stdio.h>

int main()
{
    double a; // Amount in the Savings Account
    int p = 1000; // Principal Value

    a = p; // Initial amount in bank
    double r = 5; // Rate of interest

    for (unsigned int counter = 1 ; counter<=10 ; ++counter){
        a = a*(1+r/100);
        printf("Amount in bank after %u years = %lf\n",counter,a);
    }
}
