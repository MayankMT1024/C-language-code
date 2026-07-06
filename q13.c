#include<stdio.h>

int main(){
    int num, first, last;

    printf("Enter a 3-digit number:");
    scanf("%d", &num);

    if(num < 100 || num > 999){
        printf("not a 3-digit number!\n");
    } else {
        first = num/100 ; //first digit
        last = num % 10; //last digit

        if(first == last){
            printf("%d is a palindrome number.\n", num);
        } else {
            printf("%d is not a paliondrome number.\n", num);
        }
    }
    
    return 0;
}