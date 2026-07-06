#include<stdio.h>

int main(){
    int x, y;

    printf("Enter the number of rows and columns of the array.\n");
    scanf("%d %d", &x, &y);

    int arr[x][y];

    printf("Enter the elements of the array.\n");

    for(int i = 0; i < x; i++){
        for(int j = 0; j < y; j++){
            scanf("%d", &arr[i][j]);
        }
    }
    printf("\n");

    for (int i = 0; i < y; i++){
        for (int j = 0; j < x; j++){
            printf("%d ", arr[j][i]);
        }
        printf("\n");
    }

    printf("\n");

    return 0;
}