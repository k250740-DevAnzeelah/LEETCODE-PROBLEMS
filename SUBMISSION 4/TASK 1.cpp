#include <stdio.h>

int climbStairs(int n) {
    if (n <= 1)
        return 1;        // Only 1 way if 0 or 1 steps
    return climbStairs(n - 1) + climbStairs(n - 2);
}

int main() {
    int n;
    printf("Enter number of steps: ");
    scanf("%d", &n);

    printf("Number of ways to climb %d steps = %d\n", n, climbStairs(n));
    return 0;
}
