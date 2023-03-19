#include<stdio.h>

int main()
{
    // Taking the input
    int num;
    printf("Enter the test number: ");
    scanf("%d",&num);

    int i = 1;
    int sum = 0;

    while(i<=10 && sum != 1){
        num = sum;
        sum = 0;
        while(num>0){
                int r = num%10;
                sum = sum + r*r;
                num = (int)(num/10);
        }
        i++;
    }
    printf("%d", sum);
    return 0;
}
