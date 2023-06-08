#include<stdio.h>
#include<time.h>
#include<stdlib.h>


struct list{
    int num;
    struct list *next;
};

struct list *head(void){
    struct list *start = NULL;
    struct list *curr;
    int n;
    for (unsigned int i = 0; i < 50; i++){
        n = 1+rand()%100;
        if (start == NULL){
            start = malloc(sizeof(struct list));
            start->num = n;
            start->next = NULL;
            curr = start;
        }
        else{
            curr->next = malloc(sizeof(struct list));
            curr->next->num = n;
            curr->next->next = NULL;
            curr = curr->next;
        }
    }
    return start;
}

struct list *searchList(struct list *ptr, int key){
    if (ptr->num == key){
        return ptr;
    }
    else {
        if (ptr->next != NULL){
            return searchList(ptr->next, key);
        }
        else{
            return NULL;
        }
    }
}

int main(){

    srand(time(NULL));
    struct list *ll = head();

    int value;
    printf("Enter Search Key (From 1 to 100): ");
    scanf("%d", &value);

    struct list *result = searchList(ll, value);
    if (result != NULL){
        printf("Search Key found in the List at Address: %d",result);
    }
    else{
        printf("Search Key NOT found in List.");
    }
}
