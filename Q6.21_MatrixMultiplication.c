#include<stdio.h>
#include<math.h>

void PrintArray(int mat[], int h);

int main()
{
    int n,m,p;
    printf("Enter number of rows in first matrix: ");
    scanf("%d",&n);
    printf("Enter number of columns in first matrix = number of rows in second matrix: ");
    scanf("%d",&m);
    printf("Enter number of columns in second matrix: ");
    scanf("%d",&p);

    int mat1[n][m];
    int mat2[m][p];

    for (int i = 0; i < n; ++i){
        for (int j = 0; j < m; ++j){
            printf("Enter the element of %d row and %d column of Matrix 1 (Max 4 digits): ",i+1,j+1);
            scanf("%d",&mat1[i][j]);
        }
    }

    for (int x = 0; x < m; ++x){
        for (int y = 0; y < p; ++y){
            printf("Enter the element of %d row and %d column of Matrix 2 (Max 4 digits):",x+1,y+1);
            scanf("%d",&mat2[x][y]);
        }
    }

    int prodmat[n][p];

    for (int a = 0; a < n; ++a){
        for (int b = 0; b < p; ++b){
            prodmat[a][b] = 0;
            for (int c = 0; c < m; ++c){
                prodmat[a][b] += mat1[a][c]* mat2[c][b];
            }
        }
    }

    for (int aa = 0; aa < n; ++aa){
        PrintArray(mat1[aa],m);
        puts("");
    }
    printf("----------------------------");
    puts("");
    printf("  *  ");
    puts("");
    printf("----------------------------");
    for (int ab = 0; ab < m; ++ab){
        puts("");
        PrintArray(mat2[ab],p);
        puts("");
    }
    printf("----------------------------");
    puts("");
    printf("  =  ");
    puts("");
    printf("----------------------------");
    for (int ac = 0; ac < n; ++ac){
        puts("");
        PrintArray(prodmat[ac],p);
    }

    return 0;
}

void PrintArray(int mat[], int h)
{
    for (int bb = 0; bb < h; bb++){
        printf("%5d",mat[bb]);
    }
}
