#include <stdio.h>

int main() {
    int n, i, j, tran;

    printf("Enter size of array: ");
    scanf("%d", &n);

    int nums[n];
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }
    for (i = 0; i < n; i++) {
        if (nums[i] % 2 == 0)
            nums[i] = 0;
        else
            nums[i] = 1;
    }
    for (i = 0; i < n - 1; i++) {
        for (j = i + 1; j < n; j++) {
            if (nums[i] > nums[j]) {
                tran = nums[i];
                nums[i] = nums[j];
                nums[j] = tran;
            }
        }
    }
    printf("Transformed array: ");
    for (i = 0; i < n; i++) {
        printf("%d ", nums[i]);
    }

    return 0;
}

