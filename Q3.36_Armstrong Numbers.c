#include<stdio.h>

int main()
{
    int num=100;

    while(num<=999){

        int a=num;
        int sum=0;
        while(a>0){
            int x=a%10;
            sum += x*x*x;
            a=a/10;
        }
        if(num==sum){
            printf("%d\n",num);
        }
        num++;
    }
    return 0;
}
