#include <stdio.h>

int main() {
    int n, i;
    printf("Enter n (half of total elements): ");
    scanf("%d", &n);

    int nums[2 * n], result[2 * n];
    printf("Enter %d elements:\n", 2 * n);
    for (i = 0; i < 2 * n; i++) {
        scanf("%d", &nums[i]);
    }
    int j = 0;
    for (i = 0; i < n; i++) {
        result[j++] = nums[i];     
        result[j++] = nums[i + n]; 
    }
    printf("Shuffled array: ");
    for (i = 0; i < 2 * n; i++) {
        printf("%d ", result[i]);
    }
    return 0;
}

