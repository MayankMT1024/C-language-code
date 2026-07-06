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

    int single_number = 0;

    for (int i = 0; i < n; i++)
    {
        single_number = single_number ^ nums[i];
    }

    printf("Output: %d\n", single_number);

    return 0;
}