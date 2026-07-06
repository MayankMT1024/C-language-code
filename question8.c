#include<stdio.h>

int main(){
    int a;
    double b;
    char c;

    printf("size of int = %zu bytes\n", sizeof(int));
    printf("Size of a = %zu bytes\n", sizeof(a)); //show a + 1, (a + 1)
    printf("Size of double = %zu bytes\n", sizeof(b));
    printf("size of char = %zu bytes\n", sizeof(c));
    //printf("size of pointer to int = %zu bytes\n", sizeof(int*));

    return 0;
}