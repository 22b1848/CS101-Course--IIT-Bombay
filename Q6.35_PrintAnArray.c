#include<stdio.h>
#include<math.h>

int a;

void printArray(int mat[], int size)
{
    if (size == 0){
        return;
    }
    else {
        printf("%5d",mat[a - size]);
        printArray(mat,size - 1);
    }
}

int main()
{
    printf("Enter size of array to be printed: ");
    scanf("%d",&a);

    int mat[a];
    for (int counter = 0; counter < a; counter++){
        printf("Enter element %d of array: ",counter + 1);
        scanf("%d",&mat[counter]);
    }
    puts("");
    printArray(mat,a);
    puts("");
    return 0;
}
