#include <stdio.h>
#include <string.h>

int main()
{
    int n;

    printf("Enter the number of strings (n): ");
    scanf("%d", &n);

    getchar();

    char strs[n][100];
    printf("Enter %d strings:\n", n);

    for (int i = 0; i < n; i++)
    {
        fgets(strs[i], sizeof(strs[i]), stdin);

        strs[i][strcspn(strs[i], "\n")] = '\0';
    }
    int first_str_len = strlen(strs[0]);
    for (int i = 0; i < first_str_len; i++)
    {
        char char_to_check = strs[0][i];
        int all_match = 1;

        for (int j = 1; j < n; j++)
        {
            if (i >= strlen(strs[j]) || strs[j][i] != char_to_check)
            {
                all_match = 0;
                break;
            }
        }

        if (all_match)
        {
            printf("%c", char_to_check);
        }
        else
        {
            break;
        }
    }

    printf("\n");
    return 0;
}