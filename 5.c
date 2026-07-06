#include<stdio.h>

int max(int n, int arr[n]){
    if (n == 1){
        return arr[0];
    }

    int maxofrest = max(n - 1, arr + 1);

    if(arr[0] > maxofrest)
    return arr[0];
    else
    return maxofrest;
}

int main(){
    int n;
    scanf("%d", &n);
    int arr[n];

    for(int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("%d", max(n, arr));
}