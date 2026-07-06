#include<stdio.h>

int main(){
    int a, b, c, max;

    printf("Choose three numbers  :");
    scanf("%d %d %d", a, b, c);

    // Using ternary operator to find maximum
    max = (a > b) ? ((a > c) ? a : c) : ((b > c) ? b : c);

    printf("The maximum number is: %d\n", max);

    return 0;
}