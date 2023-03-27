#include<stdio.h>

int main()
{
    int a,b,c;
    printf("Enter the sides of a triangle: ");
    scanf("%d %d %d",&a,&b,&c);

    if ((a*a + b*b == c*c || b*b + c*c == a*a || c*c + a*a == b*b) && a+b>c && a+c>b && b+c>a){
        printf("The Triangle is Right-Angled.");
    }
    else if(a+b>c && a+c>b && b+c>a){
        printf("The Triangle is not Right-Angled.");
    }
    else{
        printf("The sides do not form a triangle");
    }
    return 0;
}
