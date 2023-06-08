#include<stdio.h>
#include<time.h>
#include<stdlib.h>

struct list{
    int num;
    struct list *next;
};


struct list *start;
struct list *current;
struct list *after;


void printList(struct list *ptr){
    printf("List: ");
    while(ptr != NULL){
        printf("%d ",ptr->num);
        ptr = ptr->next;
    }
    puts("");
}

void insertn(int n){
    if (start == NULL){
        start = malloc(sizeof(struct list));
        start->num = n;
        start->next = NULL;
    }
    else if(start->next == NULL){
        if (n < start->num){
            struct list *newP = malloc(sizeof(struct list));
            newP->num = n;
            newP->next = start;
            start = newP;
        }
        else{
            start->next = malloc(sizeof(struct list));
            start->next->num = n;
            start->next->next = NULL;
        }
    }
    else{
        current = start;
        after = start->next;

        if (n <= start->num){
            struct list *newP = malloc(sizeof(struct list));
            newP->num = n;
            newP->next = start;
            start = newP;
        }
        else{
            while(after != NULL && n > after->num){
                current = current->next;
                after = current->next;
            }


            struct list *newP = malloc(sizeof(struct list));
            newP->num = n;
            newP->next = after;
            current->next = newP;
        }
    }
}

void printBackwards(struct list *ptr){
    if (ptr->next == NULL){
        printf("Reversed List: ");
        printf("%d ",ptr->num);
    }
    else{
        printBackwards(ptr->next);
        printf("%d ",ptr->num);
    }
}


int main(){

    srand(time(NULL));
    start = NULL;

    for (int i = 0; i < 25; i++){
        int n = 1 + rand()%100;
        insertn(n);
    }

    printList(start);


    printBackwards(start);
    puts("");

    return 0;
}
