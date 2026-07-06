#include <stdio.h>
#include <string.h>

int isBadPair(char a, char b) {
    return (a - b == 32) || (a - b == -32);
}

int main() {
    char s[100];
    printf("s = ");
    fgets(s, sizeof(s), stdin);
    s[strcspn(s, "\n")] = '\0';

    char good_string[100];
    int top_index = -1;

    int len = strlen(s);

    for (int i = 0; i < len; i++) {
        char current_char = s[i];

        if (top_index >= 0 && isBadPair(good_string[top_index], current_char)) {
            top_index--;
        } else {
            top_index++;
            good_string[top_index] = current_char;
        }
    }

    good_string[top_index + 1] = '\0';

    printf("Output: %s\n", good_string);

    return 0;
}