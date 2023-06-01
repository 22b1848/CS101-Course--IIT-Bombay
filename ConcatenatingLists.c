#include<stdio.h>
#include<stdlib.h>
#include<time.h>

struct list{
    int num;
    struct list *nextPtr;
};

struct list *start1;
struct list *start2;
struct list *currentPtr;

void printList(struct list *Ptr){
    struct list *printPtr;
    printPtr = Ptr;
    printf("List: ");

    while (printPtr != NULL){
        printf("%d ", printPtr->num);
        printPtr = printPtr->nextPtr;
    }
    puts("");
}


void insert1(int n){
    if (start1 == NULL){
        start1 = malloc(sizeof(struct list));
        start1->num = n;
        start1->nextPtr = NULL;
        currentPtr = start1;
    }
    else{
        currentPtr->nextPtr = malloc(sizeof(struct list));
        currentPtr = currentPtr->nextPtr;
        currentPtr->num = n;
        currentPtr->nextPtr = NULL;
    }
}

void insert2(int n){
    if (start2 == NULL){
        start2 = malloc(sizeof(struct list));
        start2->num = n;
        start2->nextPtr = NULL;
        currentPtr = start2;
    }
    else{
        currentPtr->nextPtr = malloc(sizeof(struct list));
        currentPtr = currentPtr->nextPtr;
        currentPtr->num = n;
        currentPtr->nextPtr = NULL;
    }
}

void concat(struct list *s1, struct list *s2){
    currentPtr = s1->nextPtr;
    while(currentPtr->nextPtr != NULL){
        currentPtr = currentPtr->nextPtr;
    }
    currentPtr->nextPtr = s2;
    return;
}


int main()
{
    srand(time(NULL));
    start1 = NULL;
    start2 = NULL;

    for(unsigned int i = 1; i <= 10; i++){
        int a = 1 + rand()%100;
        insert1(a);
    }
    for(unsigned int i = 1; i <= 10; i++){
        int b = 1 + rand()%100;
        insert2(b);
    }

    printList(start1);
    printList(start2);

    concat(start1,start2);
    printList(start1);
}
