#include<stdio.h>

int main()
{
    int num,a=1;
    printf("Enter the Test number: ");
    scanf("%d",&num);
    int sum=0;
    while (a <= (num/2)){
        if (num%a == 0){
            sum = sum + a;
        }
        a++;
    }
    if (sum == num){
        printf("1");
    }
    else {
        printf("0");
    }
    return 0;
}
