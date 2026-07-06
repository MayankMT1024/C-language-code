#include <stdio.h>

int main() {
    int m, n;
    printf("rows = ");
    scanf("%d", &m);
    printf("columns = ");
    scanf("%d", &n);

    int grid[m][n];

    printf("grid :\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &grid[i][j]);
        }
    }

    int perimeter = 0;

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            
            if (grid[i][j] == 1) {
                perimeter += 4;

                if (i > 0 && grid[i-1][j] == 1) {
                    perimeter -= 2;
                }

                if (j > 0 && grid[i][j-1] == 1) {
                    perimeter -= 2;
                }
            }
        }
    }

    printf("%d\n", perimeter);

    return 0;
}