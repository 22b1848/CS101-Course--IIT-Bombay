#include<stdio.h>

int main(){
    int num;
    printf("Enter the number of employees: ");
    scanf("%d",&num);

    double manager;
    printf("Enter the fixed weekly salary of managers: ");
    scanf("%lf",&manager);

    double hourly;
    printf("Enter the hourly wage of hourly workers: ");
    scanf("%lf",&hourly);

    for (int i = 1; i <= num; ++i){
        int code;
        printf("\nEnter employee code: ");
        scanf("%d",&code);

        double pay;
        int hours;
        double sales;
        double type;
        int number;

        switch(code){

            case(1):
                pay = manager;
                break;

            case(2):
                printf("Enter the number of hours worked: ");
                scanf("%d",&hours);
                if(hours<=40){
                    pay = hours*hourly;
                }
                else{
                    pay = 40*hourly + ((hours-40)*1.5*hourly);
                }
                break;

            case(3):
                printf("Enter the worker's gross weekly sales: ");
                scanf("%lf",&sales);
                pay = 250 + 0.057*sales;
                break;

            case(4):
                printf("Enter payment per item produced: ");
                scanf("%lf",&type);
                printf("Enter the number of items produced: ");
                scanf("%d",&number);

                pay = type*number;
                break;

            default:
                printf("Invalid code, Enter code again: ");
                scanf("%d",&code);
                i--;
                break;
        }
        printf("The weekly pay of Employee %d = %lf\n",i,pay);
    }
}
