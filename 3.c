#include<stdio.h>
#include<string.h>

int main(){
    printf("num = ");
    char num[100];
    fgets(num, sizeof(num), stdin);
    num[strcspn(num, "\n")] = '\0';
    int k = -1;

    for (int i = strlen(num) - 1; i >= 0; i--){
        if((num[i] % 2) != 0){
            k = i;
            break;
        }
    }

    if (k == -1) {
    printf("\n");
    return 0;
    }

    char s[k + 2];
    for(int i = 0; i <= k; i++){
        s[i] = num[i];
    }

    s[k + 1] = '\0';

    printf("%s", s);
}