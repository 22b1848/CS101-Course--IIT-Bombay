#include<stdio.h>

int main()
{
    // Initializing variables
    int test=0;
    float sales,salary;

    // Running a loop to calculate salary multiple times
    while (test==0){
        printf("Enter sales in dollars (-1 to end): ");
        scanf("%f",&sales);

        // To stop the loop when -1 is entered
        if (sales==-1){
            test++;
        }

        // Calculating salary
        else{
            salary = 200 + 9*sales/100;
            printf("Salary is: %.2f\n\n",salary);
        }
    }
    return 0;
}
