#include<stdio.h>
#include<time.h>

int flip()
{
    return rand()%2;
}

int main()
{
    srand(time(NULL));

    int NHead = 0;
    int NTail = 0;

    for (unsigned int i = 1; i <= 100; i++){
        if (flip() == 0) NTail++;
        else NHead++;
    }
    printf("Number of Heads = %d\nNumber of Tails = %d\n",NHead,NTail);

    return 0;
}
