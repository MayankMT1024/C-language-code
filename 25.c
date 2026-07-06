#include <stdio.h>

int main()
{
    int n;

    printf("Enter the number of elements (n): ");
    scanf("%d", &n);

    int nums[n];

    printf("Enter %d numbers: ", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &nums[i]);
    }

    int k;
    printf("k = ");
    scanf("%d", &k);

    int count = 0;

    for (int i = 0; i < n; i++)
    {
        int current_sum = 0;

        for (int j = i; j < n; j++)
        {
            current_sum += nums[j];

            if (current_sum == k)
            {
                count++;
            }
        }
    }

    printf("%d", count);
}