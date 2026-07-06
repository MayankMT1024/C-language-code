#include<stdio.h>

int main(){
    int num = 10;

    // Check if number is even or odd using ternary operator
    // condition? expression_if_true : expression_if_false
    (num % 2 == 0) ? printf("%d is Even\n", num) : printf("%d is odd\n");

    return 0;
}