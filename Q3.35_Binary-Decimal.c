#include<stdio.h>

int main()
{
    int bin_num;
    printf("Enter the binary number to be converted: ");
    scanf("%d", &bin_num);

    int i=1;
    int dec_num=0;

    while(bin_num>0){
        int j=1;
        int num=1;
        while(j<i){
            num = num*2;
            j++;
        }
        dec_num += (bin_num%10)*num;
        bin_num /= 10;
        i++;
    }
    printf("%d", dec_num);

    return 0;
}
