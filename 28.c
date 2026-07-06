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

    int top_row = 0, bottom_row = m - 1, left_col = 0, right_col = n -1;

    while(top_row <= bottom_row && left_col <= right_col){
        //step 1 : left to right;
        for(int i = left_col; i <= right_col; i++){
            printf("%d ", matrix[top_row][i]);
        }
        top_row++;
        if(top_row > bottom_row)
        break;

        //step 2 : top to bottom;
        for(int i = top_row; i <= bottom_row; i++){
            printf("%d ", matrix[i][right_col]);
        }
        right_col--;
        if(left_col > right_col)
        break;

        //step 3 : right to left;
        for(int i = right_col; i >= left_col; i--){
            printf("%d ", matrix[bottom_row][i]);
        }
        bottom_row--;
        if(top_row > bottom_row)
        break;

        //step 4 : bottom to top;
        for(int i = bottom_row; i >= top_row; i--){
            printf("%d ", matrix[i][left_col]);
        }
        left_col++;
        if(left_col > right_col)
        break;

    }

}