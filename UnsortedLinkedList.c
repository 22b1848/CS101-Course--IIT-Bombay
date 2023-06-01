#include<stdio.h>
#include<stdlib.h>
#include<time.h>


struct list{
    int num;
    struct list *nextPtr;
};

struct list *startPtr;
struct list *currentPtr;

void insertUnsorted(int n){

    if (startPtr == NULL){
        startPtr = malloc(sizeof(struct list));
        startPtr->num = n;
        startPtr->nextPtr = NULL;
        currentPtr = startPtr;
    }
    else{
        currentPtr->nextPtr = malloc(sizeof(struct list));
        currentPtr = currentPtr->nextPtr;
        currentPtr->num = n;
        currentPtr->nextPtr = NULL;
    }
}

void printList(struct list *Ptr){
    struct list *printPtr;
    printPtr = Ptr;
    printf("List: ");

    while (printPtr != NULL){
        printf("%d ", printPtr->num);
        printPtr = printPtr->nextPtr;
    }
}

int findmax(struct list *Ptr){
    int max_value = 0;
    while(Ptr != NULL){
        if (Ptr->num > max_value){
            max_value = Ptr->num;
        }
        Ptr = Ptr->nextPtr;
    }
    return max_value;
}

int main(){
    srand(time(NULL));
    startPtr = NULL;

    for(unsigned int i = 1; i <= 25; i++){
        int a = 1 + rand()%100;
        insertUnsorted(a);
    }
    printList(startPtr);
    printf("\nMax Value in List = %d\n",findmax(startPtr));

    return 0;
}
