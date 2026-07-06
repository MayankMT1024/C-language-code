#include<stdio.h>

void swap(int*, int*);

int main(){
    int a, b;
    printf("a = ");
    scanf("%d", &a);
    printf("b = ");
    scanf("%d", &b);

    swap(&a, &b);

    printf("a = %d\n", a);
    printf("b = %d\n", b);
}

void swap(int * a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}