#include<stdio.h>
#include<string.h>

void main(){
    char s[100];
    printf("s = ");
    fgets(s, sizeof(s), stdin);
    s[strcspn(s, "\n")] = '\0';

    int m = 0;

    for(int i = 0; s[i] == '(' || s[i] == ')'; i++){
        if(s[i] == '('){
            if(m>0)
            printf("(");
            m++;
        } else if(s[i] == ')'){
            m--;
            if (m>0)
            printf(")");
        }
    }
}