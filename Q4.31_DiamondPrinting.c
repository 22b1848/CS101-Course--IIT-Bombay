#include<stdio.h>
/*
int main()
{
    int i;
    printf("Enter the number of rows to be printed (odd number only): ");
    scanf("%d",&i);

    while(i%2 == 0){
        printf("Enter the number of rows to be printed (odd number only): ");
        scanf("%d",&i);
    }
    for (int counter = 1; counter <= i; ++counter){
        for(int a = 1; a <= i; ++a){
            if (a>(i-counter)/2 && a<(i+counter)/2){
                printf("*");
            }
            else{
                printf(" ");
            }
        }
        puts("");
    }
} */

int main(){
    int i,j,n;
    printf("Enter the number of rows: ");
    scanf("%d",&n);
    if(n%2==1){
        for(i=1;i<=n;i++){
            for(j=n;j>=i;j--){
                printf(" ");
                }
            for(j=1;j<=2*i-1;j++){
                printf("*");
            }
            printf("\n");
        }
       /* for(i=1;i<=n-1;i++){
            for(j=0;j<=i;j++){
                printf(" ");
            }
            for(j=1;j<=2*(n-i)-1;j++){
                printf("*");
            }
            printf("\n");
        } */
    }
    else{
        printf("WRONG INPUT");
    }
}
