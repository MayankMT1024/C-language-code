#include<stdio.h>
int main()
{
    char str[] = "GeeksQuiz";
    printf("%c %c %c ", &str[5], &5[str], str+5);
    printf("%c %c %c ", *(str+6), str[6], 6[str]);
    return 0;
}