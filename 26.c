#include<stdio.h>

int main(){
    int m, n;
    printf("Rows = ");
    scanf("%d", &m);
    printf("Columns = ");
    scanf("%d", &n);

    int matrix[m][n];
    int i = 0, j = 0;

    printf("matrix = ");
    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            scanf("%d", &matrix[i][j]);
        }
    }

    int rows0[m];
    int column0[n];

    for (i = 0; i < m; i++) {
        rows0[i] = 0;
    }

    for (j = 0; j < n; j++) {
        column0[j] = 0;
    }

    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            if (matrix[i][j] == 0) {
                rows0[i] = 1;
                column0[j] = 1;
            }
        }
    }

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            if (rows0[i] == 1 || column0[j] == 1) {
                matrix[i][j] = 0;
            }
        }
    }

    for(i = 0; i < m; i++){
        for(j = 0; j < n; j++){
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}