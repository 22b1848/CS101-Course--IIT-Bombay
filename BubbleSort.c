#include<stdio.h>
#include<time.h>
#include<stdlib.h>
#define SIZE 1000


void printArray(int arr[], int size)
{
    for(size_t counter = 0; counter < size; ++counter){
        printf("%5d",arr[counter]);
    }
    return;
}

int main()
{
    srand(time(NULL));
    int arr[SIZE];
    for(size_t i = 0; i < SIZE; ++i){
        arr[i] = 1 + rand()%99;
    }

    printArray(arr,SIZE);
    puts("\n");

    for (size_t a = 1; a <= SIZE; ++a){
        for (size_t b = 0; b < SIZE-1; ++b){
            if (arr[b] > arr[b+1]){
                int temp = arr[b];
                arr[b] = arr[b+1];
                arr[b+1] = temp;
            }
            else continue;
        }
    }

    printArray(arr,SIZE);
    puts("\n");

    printf("10th Percentile value = %d\n25th Percentile value = %d\n50th Percentile value = %d\n", arr[100], arr[250], arr[500]);
    printf("75th Percentile value = %d\n90th Percentile value = %d\n",arr[750], arr[900]);
    return 0;
}
