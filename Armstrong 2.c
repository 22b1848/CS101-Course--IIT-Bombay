#include<stdio.h>

int checkdigits(int y)
{
    int no=0;

    while(y>0){
        y=y/10;
        no++;
    }

    return no;
}

int main()
{
    int num;
    printf("Enter Armstrong test number (-1 to end): ");
    scanf("%d",&num);

    while(num != -1){

        int no=checkdigits(num);
        int a=num;
        int sum=0;

        while(a>0){

            int x=a%10;
            int i=1;
            int y=1;

            while(i<=no){
                y *= x;
                i++;
            }

            sum += y;
            a=a/10;
        }
        if(num==sum){
            printf("%d is an Armstrong Number.\n\n",num);
        }
        else{
            printf("%d is not an Armstrong Number.\n\n",num);
        }

        printf("Enter Armstrong test number: ");
        scanf("%d",&num);
    }
    return 0;
}
