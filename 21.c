#include <stdio.h>

int main() {
    int n, target;

    printf("Enter the number of elements (n): ");
    scanf("%d", &n);

    int nums[n];

    printf("Enter %d numbers: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }

    printf("Enter the target sum: ");
    scanf("%d", &target);

    for (int i = 0; i < n; i++) {
 
        for (int j = i + 1; j < n; j++) {
            
            if (nums[i] + nums[j] == target) {
                
                printf("Output: [%d,%d]\n", i, j);
      
                return 0;
            }
        }
    }

    printf("No solution found.\n");
    return 0;
}