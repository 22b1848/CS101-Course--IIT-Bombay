#include<stdio.h>

int main()
{
    // Taking an input integer to be factorized
    unsigned int num;
    printf("Enter the number to be prime factorized: ");
    scanf("%u",&num);

    // Writing a function which determines if a number is prime
    int check(int x){
        int i = 0;
        for(unsigned int counter = 2; counter <= x/2; ++counter){
            if (x%counter == 0){
                i = 1; // To say it is not prime
            }
        }
        return i;
    }

    unsigned int x = 2;
    while (num > 1){
        if (num%x == 0 && check(x) == 0){
            printf("%u ",x);
            num = num/x;
        }
        else {
            x++;
        }
    }
    return 0;
}
