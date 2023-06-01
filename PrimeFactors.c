#include<stdio.h>

int main()
{
    int check(int x){
        int y = 0;
        for (int j = 2; j <= x/2; ++j){
            if (x%j == 0){
                y = 1;
            }
        }
        return y;
    }

    int num;
    printf("Enter test number: ");
    scanf("%d",&num);

    for (int i = 2; i <= num/2; ++i){
        if (num%i == 0 && check(i) == 0){
            printf("%d ",i);
        }
    }
    return 0;
}
