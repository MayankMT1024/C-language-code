#include<stdio.h>

void main(){
    int n;
    scanf("%d", &n);
    int k = n / 2;
    
    int arr[n][n];
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            scanf("%d", &arr[i][j]);
        }
    }
    
    int a[n][n];
    
    for (int i = 0; i < k; i++){
        for (int j = 0; j < k; j++){
            a[i][j] = arr[k+i][k+j];
            a[i][k+j] = arr[k+i][j];
            a[k+i][j] = arr[i][k+j];
            a[k+i][k+j] = arr[i][j];
        }
    }
    
    if (n % 2 == 1){
        for (int i = 0; i < k; i++){
        for (int j = 0; j < k; j++){
            a[i][j] = arr[k+i+1][k+j+1];
            a[i][k+j+1] = arr[k+i+1][j];
            a[k+i+1][j] = arr[i][k+j+1];
            a[k+i+1][k+j+1] = arr[i][j];
        }
    }
    for (int i =0; i < n; i++){
        a[k][i] = arr[k][i];
        a[i][k] = arr[i][k];
    }
    }
    
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
}