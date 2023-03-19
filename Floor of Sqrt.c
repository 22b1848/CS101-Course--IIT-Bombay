#include<stdio.h>

int main()
{
    int num;
    printf("Enter the test number: ");
    scanf("%d",&num);
    int i = 0, a = 0;
    while(i == 0){
        if (a*a<=num){
            a++;
        }
        else{
            i++;
            a--;
        }
    }
    printf("%d",a);
    return 0;
}
