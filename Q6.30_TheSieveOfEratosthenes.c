#include<stdio.h>

int main()
{
    int arr[1000];
    for (int i = 0; i < 1000; ++i){
        arr[i] = 1;
    }
    arr[0] = 0;
    arr[1] = 0;

    for(int a = 2; a < 1000; a++){
        if (arr[a] == 1){
            for (int b = a+1; b <= 1000; ++b){
                if (b%a == 0){
                    arr[b] = 0;
                }
            }
        }
    }

    for (int c = 0; c < 1000; c++){
        if (arr[c] == 1){
            printf("%d\n",c);
        }
    }
}
