#include<stdio.h>

int main()
{
    int i,j;

    for(i=1; i<=10; ++i){
        for (j=1; j<=i; ++j){
            printf("%s","*");
        }
        puts("");
    }
    for(i=10; i>=1; --i){
        for (j=1; j<=i; ++j){
            printf("%s","*");
        }
        puts("");
    }
    for(i=1; i<=10; ++i){
        for (j=1; j<=10; ++j){
            if (j>=i){
            printf("%s","*");
            }
            else{
                printf(" ");
            }
        }
        puts("");
    }
    for(i=10; i>=1; --i){
        for (j=1; j<=10; ++j){
            if (j>=i){
            printf("%s","*");
            }
            else{
                printf(" ");
            }
        }
        puts("");
    }
    return 0;
}
