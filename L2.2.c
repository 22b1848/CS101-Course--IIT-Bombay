#include<stdio.h>

int main(){
    int n,m;
    printf("Give me 2 number to work upon: ");
    scanf("%d %d", &n, &m);
    int a = n;
    int b = m;
    int num1 = 1;
    int num2 = 1;
    while(b>0){
        num1 = num1*n;
        b--;
    }
    while(a>0){
        num2 = num2*m;
        a--;
    }
    printf("%d\n%d", num1,num2);
    return 0;
}
