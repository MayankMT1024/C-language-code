#include<stdio.h>
int main (){
    int a = 10 , b = 3;
    printf("initial values; a = %d, b = %d\n\n", a, b);

    a += b; // a = a + b
    printf("After a += b -> a = %d\n", a);

     a -= b; // a = a - b
    printf("After a -= b -> a = %d\n", a);

     a *= b; // a = a * b
    printf("After a *= b -> a = %d\n", a);

     a /= b; // a = a / b
    printf("After a /= b -> a = %d\n", a);
}