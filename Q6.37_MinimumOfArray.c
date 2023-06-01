#include<stdio.h>

int recursiveMinimum(int arr[], int size)
{
    if (size == 1){
        return arr[size - 1];
    }
    else{
        if (arr[size-1] < arr[size-2]){
            int t = arr[size-1];
            arr[size-1] = arr[size-2];
            arr[size-2] = t;
        }
        return recursiveMinimum(arr,size-1);
    }
}

int main()
{
    unsigned int size;
    printf("Enter size of array: ");
    scanf("%u",&size);

    int arr[size];
    for (int i = 0; i < size; ++i){
        printf("Enter element %d of Array: ",i+1);
        scanf("%d",&arr[i]);
    }

    int min = recursiveMinimum(arr,size);
    printf("Minimum value of input array = %d",min);

    return 0;
}
