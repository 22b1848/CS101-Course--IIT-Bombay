#include<stdio.h>

int main()
{
    int n;
    printf("Enter number whose digits are to be counted: ");
    scanf("%d",&n);
    int i = 0;
    while(n>0){
        n = (int)(n/10);
        i++;
    }
    printf("%d", i);
    return 0;
}
