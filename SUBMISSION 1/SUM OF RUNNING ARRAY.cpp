#include <stdio.h>

int main() {
    int n, i;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n], runon[n];
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    runon[0] = arr[0];
    for(i = 1; i < n; i++) {
        runon[i] = runon[i - 1] + arr[i];
    }

    printf("Running sum array: ");
    for(i = 0; i < n; i++) {
        printf("%d ", runon[i]);
    }

    return 0;
}

