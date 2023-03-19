#include<stdio.h>

int main()
{
    int a,b,i=1,test=0;
    while(test==0){
        printf("Enter 2 numbers a and b separated by a space(a>b): ");
        scanf("%d %d",&a,&b);
        if(a>b){
            test=1;
        }
        else{
            printf("Invalid Input!\n");
        }
    }
    int gcd=1;
    while(i<=b){
            if (a%i==0 && b%i==0){
                gcd = i;
            }
            i++;
    }
    printf("GCD is %d",gcd);
    return 0;
}
