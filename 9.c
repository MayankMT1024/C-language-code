#include<Stdio.h>
#include<string.h>

int newstrlen(char *s){
    static int count, i = 0;
    while(s[i] != 0){
        count++;
        i++;
        return newstrlen(s);
    }

    return count;
}

int main()
{
    char str[100];
    fgets(str, sizeof(str),stdin);
    str[strcspn(str, "\n")] = '\0';

    printf("%d", newstrlen(str));
}