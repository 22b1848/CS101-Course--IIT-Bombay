#include<stdio.h>
#include<stdlib.h>
#define SIZE 100

int binarySearch(int arr[],int size, int key)
{
    int n = size/2;

    if(arr[n] == key){
        return n;
    }
    else if(arr[n] > key){
        return binarySearch(arr,n,key);
    }
    else{
        int arr1[size-]
    }
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

    int result = binarySearch(arr,SIZE,key);

    if (result == -1){
        printf("Key not found in array");
    }
    else printf("Key found at index = %d",result);

    return 0;
}
