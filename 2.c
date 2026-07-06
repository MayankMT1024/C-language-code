gi#include<stdio.h>

int euclidiangcd(int a, int b){
    if(b == 0)
    return a;
    else return euclidiangcd(b, a % b);
}

int main(){
    int a, b;
    scanf("%d %d", &a, &b);

    printf("%d", euclidiangcd(a, b));
}