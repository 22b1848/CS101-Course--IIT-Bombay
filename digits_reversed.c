#include<stdio.h>

int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    while (num>0){
        int r = num%10;
        printf("%d ", r);
        num = (int)num/10;
    }
    return 0;
}
