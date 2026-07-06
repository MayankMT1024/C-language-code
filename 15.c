#include <stdio.h>
#include <string.h>

int main() {
    char word1[100], word2[100];
    
    char merged[201]; 

    printf("word1 = ");
    fgets(word1, sizeof(word1), stdin);
    word1[strcspn(word1, "\n")] = '\0';

    printf("word2 = ");
    fgets(word2, sizeof(word2), stdin);
    word2[strcspn(word2, "\n")] = '\0';

    int len1 = strlen(word1);
    int len2 = strlen(word2);

    int i = 0, j = 0, k = 0;

    while (i < len1 || j < len2) {
        
        if (i < len1) {
            merged[k] = word1[i];
            i++;
            k++;
        }

        if (j < len2) {
            merged[k] = word2[j];
            j++;
            k++;
        }
    }

    merged[k] = '\0';

    printf("Output: %s\n", merged);

    return 0;
}