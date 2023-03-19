#include<stdio.h>

int main()
{
    int num1,num2,num3;
    printf("Enter 3 numbers pressing Enter key after each:\n");
    scanf("%d",&num1);
    scanf("%d",&num2);
    scanf("%d",&num3);
    while (num1<num2 || num2<num3)
    {
        if (num1<num2){
            num1 = num1+num2;
            num2 = num1-num2;
            num1 = num1-num2;
        }
        else if (num2<num3){
            num2 = num2+num3;
            num3 = num2-num3;
            num2 = num2-num3;
        }
    }
    printf("%d\n%d\n%d",num1,num2,num3);
    return 0;
}
