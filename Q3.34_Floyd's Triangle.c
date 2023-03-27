#include<stdio.h>

int main ()
{
    // Taking number of rows as input
    int num;
    printf("Enter the number of rows of required Floyd's Triangle: ");
    scanf("%d", &num);

    int i=1,p=1;
    while(i<=num){
        int j=1;
        while(j<=i){
            printf("%d\t",p);
            j++;
            p++;
        }
        puts("");
        i++;
    }
    return 0;
}
