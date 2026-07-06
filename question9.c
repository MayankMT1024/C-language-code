#include<stdio.h>

int main(){
    unsigned int a = 5; //0101 in binary
    unsigned int b = 9; //1001 in binary
    printf("a = %u, b =  %u\n", a, b); //0101
    printf("a & b = %u\n", a & b); 

    printf("a | b = %u\n", a | b);

    printf("a ^ b = %u\n", a ^ b);

    printf("~a = %u\n", ~a);

    printf("a << 1 = %u\n", a << 1);

    printf("b >> 1 = %u\n", b >> 1);

    return 0;
}