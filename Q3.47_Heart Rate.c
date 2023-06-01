#include<stdio.h>

int main()
{
    int birth_month = 0;
    int birth_day,birth_year;
    int current_month,current_day, current_year;

    while(birth_month != -1){
        printf("\nEnter Birthday(MM/DD/YYYY , Date = -1/-1/-1 to end): ");
        scanf("%d/%d/%d",&birth_month,&birth_day,&birth_year);

        if (birth_month != -1){
            printf("Enter Current date(MM/DD/YYYY): ");
            scanf("%d/%d/%d",&current_month,&current_day,&current_year);

            int age = current_year - birth_year;
            int maxrate = 220 - age;

            printf("\nAge of person: %d\n",age);
            printf("Maximum Heart Rate: %d\n",maxrate);
            printf("Target Heart rate: %d - %d\n",maxrate/2,maxrate*85/100);
        }
    }

    return 0;
}
