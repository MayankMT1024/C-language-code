#include <stdio.h>
#include <string.h>

int getValue(char c)
{
    switch (c)
    {
    case 'I':
        return 1;
    case 'V':
        return 5;
    case 'X':
        return 10;
    case 'L':
        return 50;
    case 'C':
        return 100;
    case 'D':
        return 500;
    case 'M':
        return 1000;
    default:
        return 0;
    }
}

int romanToInt(char *s)
{
    int total = 0;
    int len = strlen(s);

    if (len == 0)
    {
        return 0;
    }

    for (int i = 0; i < len - 1; i++)
    {
        int current_val = getValue(s[i]);
        int next_val = getValue(s[i + 1]);

        if (current_val < next_val)
        {
            total -= current_val;
        }
        else
        {
            total += current_val;
        }
    }

    total += getValue(s[len - 1]);

    return total;
}

int main()
{
    char s[100];

    printf("s = ");

    fgets(s, sizeof(s), stdin);
    s[strcspn(s, "\n")] = '\0';

    int result = romanToInt(s);
    printf("%d\n", result);

    return 0;
}