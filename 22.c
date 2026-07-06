#include<stdio.h>

int main(){
    int n;
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }

    int max_profit = 0;

    for (int i = 0; i < n; i++){
        for (int j = i; j < n; j++){
            if ((arr[j] - arr[i]) > max_profit){
                max_profit = arr[j] - arr[i];
            }
        }
    }

    printf("%d", max_profit);
}