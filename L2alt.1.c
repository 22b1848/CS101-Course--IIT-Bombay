#include<stdio.h>

int main()
{
    float L,K;
    printf("Enter 2 numbers L and K separated by a space:\n");
    scanf("%f %f",&L,&K);
    if (L>K){
        do{
            L = L - 0.5;
            K = K + 0.5;
        } while (L != K);
    }
    else if (L<K){
        do{
            L = L + 0.5;
            K = K - 0.5;
        } while (L != K);
    }
    else{
        L = K;
    }
    printf("%.2f", L);
}
