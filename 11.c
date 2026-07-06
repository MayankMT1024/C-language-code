#include<stdio.h>
#include<string.h>

int myAtoi(char *s){
    int a[100];
    int i = 0;
    int sign = 1;
    int result = 0;

    while (s[i] == ' ') {
        i++;
    }

    if (s[i] == '-') {
        sign = -1;
        i++;
    } else if (s[i] == '+') {
        sign = 1; 
        i++;
    }

    while(s[i] <= '9' && s[i] >= '0'){
        int digit = s[i] - '0';

        result = result * 10 + digit;
        i++;
    }

    result = result * sign;

    return result;
}

int main(){
    char s[100];
    printf("s = ");
    fgets(s, sizeof(s), stdin);
    s[strcspn(s, "\n")] = '\0';

    printf("%d", myAtoi(s));
}