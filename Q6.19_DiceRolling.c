#include<stdio.h>
#include<time.h>
#include<stdlib.h>

void printTable(int arr[], int size){
    printf("Sum\tIterations\n\n");
    for (int i = 0; i < size; ++i){
        printf("%d\t%d\n",i+2,arr[i]);
    }
}

int main()
{
    srand(time(NULL));

    int arr[11] = {0};
    for (int counter = 1; counter <= 36000; counter++){
        int die1 = 1 + rand()%6;
        int die2 = 1 + rand()%6;

        int sum = die1 + die2;

        switch(sum){
            case 2:
                arr[0]++;
                break;
            case 3:
                arr[1]++;
                break;
            case 4:
                arr[2]++;
                break;
            case 5:
                arr[3]++;
                break;
            case 6:
                arr[4]++;
                break;
            case 7:
                arr[5]++;
                break;
            case 8:
                arr[6]++;
                break;
            case 9:
                arr[7]++;
                break;
            case 10:
                arr[8]++;
                break;
            case 11:
                arr[9]++;
                break;
            case 12:
                arr[10]++;
                break;
        }
    }

    printTable(arr, 11);
}
