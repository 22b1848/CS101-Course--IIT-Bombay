#include<stdio.h>
#include<time.h>

int roundToInteger(double num){
    int y = floor(num + 0.5);
    return y;
}

double roundToTenths(double num){
    double y = floor(num*10 + 0.5)/10;
    return y;
}

double roundToHundreths(double num){
    double y = floor(num*100 + 0.5)/100;
    return y;
}

double roundToThousandths(double num){
    double y = floor(num*1000 + 0.5)/1000;
    return y;
}

int main()
{
    double num = 1;

    while(num != -1){
        printf("Enter Test number(-1 to end): ");
        scanf("%lf",&num);

        if (num != -1){
            printf("Original Value = %lf",num);
            printf("\nNumber rounded to nearest Integer = %d",roundToInteger(num));
            printf("\nNumber rounded to nearest tenth = %0.1lf",roundToTenths(num));
            printf("\nNumber rounded to nearest hundredth = %0.2lf",roundToHundreths(num));
            printf("\nNumber rounded to nearest thousandth = %0.3lf\n\n",roundToThousandths(num));
        }
    }
}
