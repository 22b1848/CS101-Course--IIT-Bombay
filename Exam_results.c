#include<stdio.h>

int main()
{
    int result,i=0;
    int pass=0,fail=0;
    while (i<10){
        printf("Enter Result (1=pass,2=fail): ");
        scanf("%d",&result);
        if (result==1){
            pass++;
        }
        else if (result==2){
            fail++;
        }
        i++;
    }
    printf("Passed %d\nFailed %d\n",pass,fail);
    if (pass>8){
        printf("Bonus to instructor!");
    }
    return 0;
}
