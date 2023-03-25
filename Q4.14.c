#include<stdio.h>

int main()
{
    // Initializing variables
    int num = 5, a = 1, fact = 1;

    // Printing Header row of Table with border
    printf("---------------------------\n");
    printf("| %10s | %10s |\n", "Integer", "Factorial");
    printf("---------------------------\n");

    // Running a loop to print rows of integers and their factorial
    while (a<=5){
        fact = fact*a;
        printf("| %10d | %10d |\n", a, fact);
        a++;
    }
    // Printing the ending border to close the table
    printf("---------------------------");
    return 0;
}
