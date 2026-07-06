#include <stdio.h>

int main(void) {
    int r, c, r2, c2;

    printf("Enter rows and columns of Matrix A:");
    if (scanf("%d %d", &r, &c) != 2) return 0;

    printf("Enter rows and columns of Matrix B :");
    if (scanf("%d %d", &r2, &c2) != 2) return 0;

    if (c != r2) {
        printf("Error!\n");
        return 0;
    }

    int A[r][c];
    int B[r2][c2];
    int C[r][c2];

    printf("Enter elements of Matrix A :\n");
    for (int i = 0; i < r; i++){
        for (int j = 0; j < c; j++){
            scanf("%d", &A[i][j]);
        }
    }

    printf("Enter elements of Matrix B :\n");
    for (int i = 0; i < r2; i++){
        for (int j = 0; j < c2; j++){
            scanf("%d", &B[i][j]);
        }
    }

    for (int i = 0; i < r; i++){
        for (int j = 0; j < c2; j++){
            C[i][j] = 0;
            for (int k = 0; k < c; k++){
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    printf("Resulting Matrix ( %d x %d ):\n", r, c2);
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c2; j++)
            printf("%d ", C[i][j]);
        printf("\n");
    }

    return 0;
}