#include<stdio.h>
#include<string.h>

void main(){
    char s[100];
    printf("s = ");
    fgets(s, sizeof(s), stdin);
    s[strcspn(s, "\n")] = '\0';

    int count[256] = {0};
    int length = 0;
    int odd = 0;

    for(int i = 0; i < strlen(s); i++){
        count[s[i]]++;
    }

    for (int i = 0; i < 256; i++){
        int n = count[i];
        length = length + ( (n/2) * 2 );

        if (n%2 != 0){
            odd = 1;
        }
    }
    
    length = length + odd;

    printf("%d", length);
}