#include <stdio.h>
#include <string.h>

int main()
{
    char s[100], t[100];
    printf("s = ");
    fgets(s, sizeof(s), stdin);
    s[strcspn(s, "\n")] = '\0';
    printf("t = ");
    fgets(t, sizeof(t), stdin);
    t[strcspn(t, "\n")] = '\0';
    char s_to_t[256] = {0}, t_to_s[256] = {0};

    if (strlen(s) != strlen(t))
    {
        printf("false");
        return 0;
    }

    for (int i = 0; i < strlen(s); i++)
    {
        char char_s = s[i];
        char char_t = t[i];

        if (s_to_t[char_s] != 0)
        {
            if (s_to_t[char_s] != char_t)
            {
                printf("false");
                return 0;
            }
        }
        else if (t_to_s[char_t] != 0)
        {
            printf("false");
            return 0;
        }
        else
        {
            s_to_t[char_s] = char_t;
            t_to_s[char_t] = char_s;
        }
    }

    printf("true");
}