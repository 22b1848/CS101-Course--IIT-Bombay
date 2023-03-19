#include<stdio.h>

int main()
{
    int num;
    printf("Enter the test number: ");
    scanf("%d",&num);
    int number = num;
    int sum=0,r;
    while(num>0){
        int a = 1, b = 1;
        r = num%10;
        while(a<=r){
            b = b*a;
            a++;
        }
        sum = sum + b;
        num = (int)(num/10);
    }
    if(sum == number){
        printf("1");
    }
    else{
        printf("0");
    }
    return 0;
}
