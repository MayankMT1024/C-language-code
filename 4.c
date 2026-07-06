#include <stdio.h>
int check(char a[100])
{
    static int i = 0;
    if (i < strlen(a) / 2)
    {
        if (a[i] != a[strlen(a) - 1 - i])
        {
            printf("no");
            return 0;
        }
        i++;
        return check(a);
    }
    else
        printf("yes");
    return 0;
}
int main()
{
    char a[100];
    fgets(a, sizeof(a), stdin);
    a[strcspn(a, "\n")] = '\0';
    check(a);
}