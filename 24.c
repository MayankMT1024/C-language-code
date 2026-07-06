#include <stdio.h>

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void reverse(int nums[], int start, int end)
{
    while (start < end)
    {
        swap(&nums[start], &nums[end]);
        start++;
        end--;
    }
}

void nextPermutation(int nums[], int n)
{
    int m = -1;
    for (int i = n - 2; i >= 0; i--)
    {
        if (nums[i] < nums[i + 1])
        {
            m = i;
            break;
        }
    }

    if (m == -1)
    {
        reverse(nums, 0, n - 1);
        return;
    }

    for (int i = n - 1; i > m; i--)
    {
        if (nums[i] > nums[m])
        {
            swap(&nums[m], &nums[i]);
            break;
        }
    }

    reverse(nums, m + 1, n - 1);
}

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

    nextPermutation(nums, n);

    for (int i = 0; i < n; i++)
    {
        printf("%d ", nums[i]);
    }
}