#include<stdio.h>
#include<string.h>

void main(){
    char s[100];
    printf("s = ");
    fgets(s, sizeof(s), stdin);
    s[strcspn(s, "\n")] = '\0';

    int m = 0;
    int max = 0;

    for(int i = 0; s[i] != '\0'; i++){
        if(s[i] == '('){
            m++;
        } else if(s[i] == ')'){
            m--;
        }

        if (m > max){
            max = m;
        }
    }

    printf("%d", max);
}