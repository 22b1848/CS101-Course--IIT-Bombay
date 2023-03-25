#include<stdio.h>

int main()
{
    // Initializing variables
    float loan,rate,interest;
    int term,test=0;

    // Running a loop calculating interest
    while (test==0){

        // Taking input for loan
        printf("Enter loan principal (-1 to end): ");
        scanf("%f",&loan);

        // To stop the loop if -1 is entered
        if (loan==-1){
            test++;
        }
        else{
        // Taking inputs of rate and loan term
            printf("Enter interest rate: ");
            scanf("%f",&rate);
            printf("Enter term of the loan in days: ");
            scanf("%d",&term);
        // Calculating interest and printing output
            interest = loan*rate*term/365;
            printf("The interest charge is $%.2f\n\n",interest);
        }
    }
    return 0;
}
