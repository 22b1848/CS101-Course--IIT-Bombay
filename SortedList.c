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

double avg(struct list *ptr){
    double sum = 0;
    int x = 0;

    while(ptr != NULL){
        sum += ptr->num;
        x++;
        ptr = ptr->next;
    }
    return sum/x;
}

int main(){

    srand(time(NULL));
    start = NULL;

    for (int i = 0; i < 25; i++){
        int n = 1 + rand()%100;
        insertn(n);
    }

    printList(start);
    printf("Average of Values in List = %.3lf\n",avg(start));

    return 0;
}
