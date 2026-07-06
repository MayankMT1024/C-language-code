#include<stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    
    int arr[n];
    int j = 0, k = 0, i =0;

    for (i; i < n; i++){
        scanf("%d", &arr[i]);
        if(arr[i]>=0)
        j++;
        else
        k++;
    }

    int arr1[j], arr2[k];
    j = 0;
    k = 0;
    i = 0;
    for (i; i < n; i++){
        if(arr[i]>=0){
            arr1[j] = arr[i];
        j++;
        }
        else{
            arr2[k] = arr[i];
        k++;
        }
    }

    for (i = 0; i < k; i++){
        printf("%d %d ", arr1[i], arr2[i]);
    }
}