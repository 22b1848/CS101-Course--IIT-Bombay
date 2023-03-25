#include<stdio.h>

int main()
{
    // Taking an Integer input to check for prime number
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    // Initializing counter variable i and truth value for prime number
    int i = 2;
    int prime = 1;
    // Running a loop to check remainders for different divisors
    while(i < (int)(num/2)){
        // If a divisor is giving zero remainder, updating the value of prime variable
        if (num%i == 0){
            prime = 0;
        }
        i++;
    }
    // Printing output as per truth value of prime
    if(prime==0){
        printf("%d is not prime.",num);
    }
    else{
        printf("%d is prime.",num);
    }
    return 0;
}
