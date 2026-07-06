#include <stdio.h>

int main() {
    int n;
    printf("Enter the number of elements (n): ");
    scanf("%d", &n);

    int nums[n];

    printf("Enter %d numbers (0s and 1s): ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }

    int current_streak = 0;
    int max_streak = 0;

    for (int i = 0; i < n; i++) {
        if (nums[i] == 1) {
            current_streak++;
        } else {
            if (current_streak > max_streak) {
                max_streak = current_streak;
            }
            current_streak = 0;
        }
    }

    if (current_streak > max_streak) {
        max_streak = current_streak;
    }
    
    printf("Output: %d\n", max_streak);

    return 0;
}