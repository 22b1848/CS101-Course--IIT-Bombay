#include<stdio.h>

int main()
{
    int arr[10];
    int *aPtr = &arr;
    for(int i = 0; i < 10; i++){
        printf("%d\n",aPtr + i);
    }
}
