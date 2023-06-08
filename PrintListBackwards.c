#include<stdio.h>
#include<time.h>
#include<stdlib.h>


struct list{
    int num;
    struct list *next;
};


struct list *start;
struct list *current;


int main()
{
    start = NULL;
    srand(time(NULL));

}
