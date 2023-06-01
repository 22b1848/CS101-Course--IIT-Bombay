#include<stdio.h>

int lcm(int a, int b){
    int y = a*b;
    int lcm = a*b;
    while(y >= a && y >= b){
        if (y%a == 0 && y%b == 0){
            lcm = y;
        }
        y--;
    }
    return lcm;
}

int main()
{
    int a,b;
    printf("Enter 2 numbers to take LCM of (Separated by a space): ");
    scanf("%d %d",&a,&b);

    printf("Lowest Common Multiple of %d and %d = %d\n",a,b,lcm(a,b));

    return 0;
}
