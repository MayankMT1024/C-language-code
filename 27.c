#include <stdio.h>

int main()
{
    int n;
    printf("rows and columns = ");
    scanf("%d", &n);
    int matrix[n][n];

    printf("matrix = ");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = n - 1; j >= 0; j--)
        {
            printf("%d ", matrix[j][i]);
        }
        printf("\n");
    }
}