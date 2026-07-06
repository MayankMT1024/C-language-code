#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int amount[2 * n], cost[2 * n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &amount[i]);
    }

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &cost[i]);
    }

    for (int i = 0; i < n; i++)
    {
        amount[n + i] = amount[i];
        cost[n + i] = cost[i];
    }

    for(int i = 0; i < n; i++)
    {
        int tank = 0;
        int j;
        for(j = i; j < i + n; j++){
            tank += amount[j];
            tank -= cost[j];
            if(tank < 0){
                break;
            }
        }
        if (j == i + n){
            printf("%d", i);
            return 0;
        }
    }

    printf("-1");
}