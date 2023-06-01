#include<stdio.h>
#include<math.h>
#include<stdlib.h>

void printArray(int arr[],int size)
{
    printf("[ ");
    for(int f = 0; f < size; ++f){
        printf("%6d",arr[f]);
    }
    printf("  ]");
}

int main()
{
    int arr1[10];
    for (int a = 0; a < 10; a++){
        int r = 0;
        while(r == 0){
            printf("Enter element %d of 1st Array: ",a+1);
            scanf("%d",&arr1[a]);
            for (int o = 0; o < a; o++){
                if (arr1[o] == arr1[a]){
                    r = 1;
                }
            }
            if (r == 1){
                r = 0;
            }
            else r = 1;
        }

    }

    int arr2[10];
    for (int b = 0; b < 10; b++){
        int t = 0;
        while(t == 0){
            printf("Enter element %d of 2nd Array: ",b+1);
            scanf("%d",&arr2[b]);
            for (int p = 0; p < b; p++){
                if (arr2[p] == arr2[b]){
                    t = 1;
                }
            }
            if (t == 1){
                t = 0;
            }
            else t = 1;
        }
    }

    int id = 0;
    for (int i = 0; i < 10; i++){
        for (int j = 0; j < 10; j++){
            if (arr1[i] == arr2[j]){
                id++;
            }
        }
    }

    int arr[id];
    int in = 0;
    for (int i = 0; i < 10; i++){
        for (int j = 0; j < 10; j++){
            if (arr1[i] == arr2[j]){
                arr[in] = arr1[i];
                in++;
            }
        }
    }

    printf("\nIntersection of Array 1: ");
    printArray(arr1,10);
    printf("\nIntersection of Array 2: ");
    printArray(arr2,10);
    printf("\n\nIntersection of Array 1 and Array 2: ");
    printArray(arr,id);
    puts("");
}
