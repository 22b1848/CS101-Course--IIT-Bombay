#include<stdio.h>

int main()
{
    int a,b,c; // Declaring 3 variables

    // Taking input of 3 integers
    printf("Enter three different integers: ");
    scanf("%d %d %d",&a,&b,&c);

    // Printing outputs which don't need loops to be calculated
    printf("Sum is %d",a+b+c);
    printf("Average is %d",(a+b+c)/3);
    printf("Product is %d",a*b*c);

    // Running a loop to sort the numbers from highest to lowest
    while (a<b || b<c){
        if (a<b){
            a = a+b;
            b = a-b;
            a = a-b;
        }
        else {
            b = b+c;
            c = b-c;
            b = b-c;
        }
    }
    // Printing the Smallest and Largest numbers after sorting
    printf("Smallest is %d",c);
    printf("Largest is %d",a);
    return 0;
}
