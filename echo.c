#include<stdio.h>

int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d",&num);

    while(num<=100){
        printf("%d\n",num);
        printf("Enter another number: ");
        scanf("%d",&num);
    }
    printf("Entered number was greater than 100.");
    return 0;
}
