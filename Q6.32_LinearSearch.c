#include<stdio.h>
#include<stdlib.h>
#define SIZE 100

int linearSearch(int arr[], int size, int key)
{
    if (arr[size-1] == key){
        return size-1;
    }
    else if (size == 1){
        return -1;
    }
    else return linearSearch(arr,size-1,key);
}


int main()
{
    int arr[SIZE];
    for(size_t i = 0; i < SIZE; ++i){
        arr[i] = 2*i;
    }

    int key;
    printf("Enter search key: ");
    scanf("%d",&key);

    int result = linearSearch(arr,SIZE,key);

    if (result == -1){
        printf("Key not found in array");
    }
    else printf("Key found at index = %d",result);

    return 0;
}
