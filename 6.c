#include <stdio.h>
#include <string.h>

int main()
{
    char s[100], goal[100];
    printf("s = ");
    fgets(s, sizeof(s), stdin);
    s[strcspn(s, "\n")] = '\0';
    printf("goal = ");
    fgets(goal, sizeof(goal), stdin);
    goal[strcspn(goal, "\n")] = '\0';

    if (strlen(s) != strlen(goal))
    {
        printf("false");
        return 0;
    }

    char temp[strlen(s) * 2 + 1];
    strcpy(temp, s);
    strcat(temp, s);

    if (strstr(temp, goal) != 0)
    {
        printf("true");
    }
    else
    {
        printf("false");
    }
}