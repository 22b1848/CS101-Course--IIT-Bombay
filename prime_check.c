#include<stdio.h>

int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    int i = 2;
    int prime = 1;
    while(i < (int)(num/2)){
        if (num%i == 0){
            prime = 0;
        }
        i++;
    }
    printf("%d", prime);
    return 0;
}
