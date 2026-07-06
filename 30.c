#include<stdio.h>

int main(){
    int m, n;
    printf("Rows = ");
    scanf("%d", &m);
    printf("Columns = ");
    scanf("%d", &n);

    int matrix[m][n];
    int i = 0, j = 0;

    printf("matrix = \n");
    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            scanf("%d", &matrix[i][j]);
        }
    }

    for(int i = 1; i < m; i++){
        for(int j = 1; j < n; j++){
            if(matrix[i][j] != matrix[i -1][j - 1]){
                printf("false");
                return 0;
            }
        }
    }

    printf("true");
}