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

    if (strlen(s) != strlen(t)) {
        printf("false");
        return 0;
    }

    int m[256] = {0};
    
    int len = strlen(s);

    for (int i = 0; i < len; i++) {
        m[s[i]]++;
    }

    for (int i = 0; i < len; i++) {
        m[t[i]]--;
    }

    for (int i = 0; i < 256; i++) {
        if (m[i] != 0) {
            printf("false");
            return 0;
        }
    }

    printf("true");
}