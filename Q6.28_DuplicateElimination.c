#include<stdio.h>
#include<math.h>
#include<time.h>
#include<stdlib.h>

void printArray(int arr[], int size)
{
    printf("[");
    for(int n = 0; n < size; ++n){
        printf("%5d",arr[n]);
    }
    printf("    ]");
}

int main()
{
    int arr[20] = {0};
    srand(time(NULL));

    int i = 0;
    while(i < 20){
        int num = 1 + rand()%20;
        int a = 0;
        for (int counter = 0; counter < i; ++counter){
            if (num == arr[counter]){
                a = 1;
            }
        }
        if (a != 1){
            arr[i] = num;
            ++i;
        }
    }

    printArray(arr,20);
    return 0;
}
