#include<stdio.h>

int main(){
    int a,b,c,d;
    printf("Enter 2 numbers separated by a space:\n");
    scanf("%d %d",&a,&b);
    c = a;
    a = b;
    b = c;
    c = 0;
    d = 0;
    int result;
    do {
        c++;
        d = d+c;
    } while (c <= a);
    result = d%b;
    printf("%d %d %d",a,b,result);
    return 0;
}
