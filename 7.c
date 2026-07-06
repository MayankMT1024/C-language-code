#include<Stdio.h>
#include<string.h>

int newstrlen(char *s){
    char *s1 = s;
    while(*++s);

    return (s - s1);
}

int main()
{
    char str[100];
    fgets(str, sizeof(str),stdin);
    str[strcspn(str, "\n")] = '\0';

    printf("%d", newstrlen(str));
}