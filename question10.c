#include<stdio.h>

int main(){
    int a;

    scanf("%d", &a);
    if(a < 10){printf("single digit");}else{printf("the number is %d", a);};

    return 0;
}