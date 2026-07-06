#include<stdio.h>
#include<string.h>

void stringreverse(char *s, int len){
    char *start = s;
    char *end = s + len - 1;

    char temp;

    while(start < end){
        temp = *start;
        *start = *end;
        *end = temp;

        start++;
        end--;
    }
}

int main (){
    char str[200];
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';

    int len = strlen(str);

    stringreverse(str, len);

    printf("%s", str);
}