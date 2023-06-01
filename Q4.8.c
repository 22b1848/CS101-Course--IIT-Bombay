#include<stdio.h>

int main()
{
    int x,i,j;
    printf("Enter the number of rows/columns: ");
    scanf("%d",&x);

    for (i = 1; i <= x; ++i){
        for (j = 1; j <= x; ++j){
            if (i == j){
                printf("%c ",'@');
            }
            else {
                printf("  ");
            }
        }
        puts("");
    }
    return 0;
}
