#include <stdio.h>

int main() {
    int n;

    printf("Enter the number of elements (n): ");
    scanf("%d", &n);

    int nums[n];

    printf("Enter %d numbers: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }

    int write_index = 0;

    for (int i = 0; i < n; i++) {
         if (nums[i] != 0) {
            nums[write_index] = nums[i];
            write_index++;
        }
    }

    for (int i = write_index; i < n; i++) {
        nums[i] = 0;
    }

    for (int i = 0; i < n; i++) {
        printf("%d ", nums[i]);
    }

    return 0;
}