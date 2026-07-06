#include <stdio.h>
#include <string.h>

int main()
{
    char s[100], t[100];
    printf("s = ");
    fgets(s, sizeof(s), stdin);
    s[strcspn(s, "\n")] = '\0';

    int m[256] = {0};

    for (int i = 0; i < strlen(s); i++)
    {
        m[s[i]]++;
    }
    
    for (int j = strlen(s); j > 0; j--)
    {
        for (int i = 0; i < 256; i++)
        {
            if (m[i] == j)
            {
                for (int k = 0; k < j; k++)
                {
                    printf("%c", i);
                }
            }
        }
    }
}