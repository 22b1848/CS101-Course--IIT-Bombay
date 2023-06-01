#include<stdio.h>
#include<time.h>
#include<math.h>
#include<stdlib.h>

int main()
{
    int data[5][4] = {0};

    int person = 1,product,value;
    while(person >= 0){

        printf("Enter Salesperson Number (-1 to end): ");
        scanf("%d",&person);

        if (person == -1){
            break;
        }

        printf("Enter Product Number: ");
        scanf("%d",&product);
        printf("Enter Value of Sales: ");
        scanf("%d",&value);

        data[product-1][person-1] += value;
    }

    puts("");
    printf("%20s %20s %20s %20s %20s %20s\n"," ","SALESPERSON 1","SALESPERSON 2","SALESPERSON 3","SALESPERSON 4","PRODUCT TOTAL");
    for (int i = 0; i < 5; ++i){
        printf("          PRODUCT %2d %20d %20d %20d %20d %20d",i+1,data[i][0],data[i][1],data[i][2],data[i][3],data[i][0]+data[i][1]+data[i][2]+data[i][3]);
        puts("");
    }

    printf("%20s","SALESPERSON TOTAL");
    for(int a = 0; a < 4; ++a){
        printf("%21d",data[0][a]+data[1][a]+data[2][a]+data[3][a]+data[4][a]);
    }
    puts("");
}
