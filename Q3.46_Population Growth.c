#include<stdio.h>

int main()
{
    long long int current_population = 7888400000;
    float rate = 0.9;
    int i = 1;
    long long int population = current_population;

    while(i<=5){
        population += population*0.9/100;
        printf("Population after year %d = %lld\n",i,population);
        i++;
    }
    return 0;
}
