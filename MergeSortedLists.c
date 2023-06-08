#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define size 10


struct list{
    int num;
    struct list *next;
};

struct list *genList(void){
    struct list *head = NULL;

    for(unsigned int i = 0; i < size; i++){
        int n = 1 + rand()%100;

        if (head == NULL){
            head = malloc(sizeof(struct list));
            head->num = n;
            head->next = NULL;
        }

        else if (head->next == NULL){
            struct list *newP = malloc(sizeof(struct list));
            newP->num = n;

            if (head->num < n){
                newP->next = NULL;
                head->next = newP;
            }
            else{
                newP->next = head;
                head = newP;
            }
        }

        else{
            struct list *current = head;
            struct list *after = head->next;
            struct list *newP = malloc(sizeof(struct list));
            newP->num = n;

            if (n < head->num){
                newP->next = head;
                head = newP;
            }
            else if (n < head->next->num){
                newP->next = head->next;
                head->next = newP;
            }
            else{
                while(after != NULL && n > after->num){
                    current = after;
                    after = after->next;
                }
                newP->next = after;
                current->next = newP;
            }
        }

    }

    return head;
}

void printList(struct list *Ptr){
    while(Ptr != NULL){
        printf("%d ",Ptr->num);
        Ptr = Ptr->next;
    }
    puts("");
}

struct list *mergeL(struct list *p1, struct list *p2){
    struct list *head = p1;
    struct list *curr = head;
    while(curr->next != NULL){
        curr = curr->next;
    }
    curr->next = p2;

    for (unsigned int i = 0; i <= 2*size; i++){
        int temp;
        struct list *current = head;
        struct list *after = head->next;
        while(after != NULL){
            if (current->num > after->num){
                temp = current->num;
                current->num = after->num;
                after->num = temp;
            }
            current = after;
            after = after->next;
        }
    }

    return head;
}


int main(){

    srand(time(NULL));

    struct list *list1 = genList();
    struct list *list2 = genList();
    printf("List 1: ");
    printList(list1);
    printf("List 2: ");
    printList(list2);

    struct list *LIST = mergeL(list1, list2);
    printf("Merged List (Sorted): ");
    printList(LIST);

    return 0;
}

