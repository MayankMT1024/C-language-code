#include<stdio.h>

int sumofdigits(int n){
    if (n == 0)
    return 0;
    int m = n % 10;
    n = n / 10;
    return m + sumofdigits(n);
}

int main(){
    int n;
    scanf("%d", &n);

    printf("%d", sumofdigits(n));

    return 0;
}