#include<stdio.h>

int main()
{
    int a,b,test=0;
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
    int r;
    while(b>0){
        r=a%b;
        a=b;
        b=r;
    }
    printf("GCD is %d.",a);
    return 0;
}
