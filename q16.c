#include<stdio.h>

int main(){
    unsigned int a = 5;//0101 in binary
    unsigned int b = 9;//1001 in binary
    printf("a = %u, b = %u\n", a, b);
    //AND (&)
    printf("a && b = %u \n", a && b);//0101 & 1001 = 0001 (1)

    // OR (|)
    printf("a | b = %u\n", a || b); // 0101 | 1001 = 1101 (13)

// XOR (^)
printf("a ^ b = %u\n", a ^ b); // 0101 ^ 1001 = 1100 (12)

// NOT (~)
printf("~a = %u\n", ~a); // Bitwise negation

// Left Shift (<<)
printf("a << 1 = %u\n", a << 1); // 0101 << 1 = 1010 (10)

// Right Shift (>>)
printf("b >> 1 = %u\n", b >> 1); // 1001 >> 1 = 0100 (4)

return 0;
}