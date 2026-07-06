#include<stdio.h>
#include<string.h>

int main(){
    int n;
    scanf("%d", &n);
    getchar();
    char strs[n][100];
    printf("strs = ");
    int i;

    for (i = 0; i < n; i++){
        fgets(strs[i], sizeof(strs[i]), stdin);
        strs[i][strcspn(strs[i], "\n")] = '\0';
    }

    int count[256] = {0};

    for(int i = 0; i < strlen(strs[0]); i++){
        count[strs[0][i]]++;
    }

   
    for (int i = 1; i < n; i++){

         int count1[256] = {0};

        for (int j = 0; j < strlen(strs[i]); j++){
            count1[strs[i][j]]++;
        }
        
        for (int j = 0; j < 256; j++){
            if (count1[j] < count[j]){
                count[j] = count1[j];
            }
        }
    }

    i = 0;
    while(i < 256){
        if (count[i] != 0){
            printf("%c", i);
            count[i]--;
        } else {
            i++;
        }
    }

}