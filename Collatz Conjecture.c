#include<stdio.h>

int main()
{
    int n;
    printf("Enter a natural number: ");
    scanf("%d", &n);
    int i = 0;
    while(n != 1){
        if (n%2 == 0){
            n = n/2;
        }
        else {
            n = 3*n+1;
        }
        i++;
    }
    printf("%d", i);
    return 0;
}
