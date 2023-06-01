#include<stdio.h>
#include<time.h>
#include<math.h>

void printArray(int arr[], int size)
{
    for(int i = 0; i < size; ++i){
        printf("%5d",arr[i]);
    }
}

int main()
{
    int n;
    printf("Enter size of array to be randomly generated: ");
    scanf("%d",&n);
    int arr[n];
    srand(time(NULL));
    for(int i = 0; i < n; i++){
        arr[i] = rand()%101;
    }
    int *arrPtr = &arr;
    printArray(arr,n);
    int sum = 0;
    for (int counter = 0; counter < n; counter++){
        sum += *(arrPtr+counter);
    }
    printf("\n%d",sum);
}
