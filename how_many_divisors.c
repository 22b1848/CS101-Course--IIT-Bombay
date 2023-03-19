#include<stdio.h>

int main()
{
    int num;
    printf("Enter a positive integer: ");
    scanf("%d",&num);
    int a=1,i=0;
    while(a<=num){
        if(num%a == 0){
            i++;
        }
        a++;
    }
    printf("%d",i);
    return 0;
}
