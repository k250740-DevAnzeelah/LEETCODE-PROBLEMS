#include <stdio.h>
#include <string.h>

int main() {
    int n;
    printf("Enter number of words: ");
    scanf("%d", &n);

    char words[20][20]; 

    printf("Enter the words:\n");
    for (int i = 0; i < n; i++) {
        scanf("%s", words[i]);
    }

    char result[20] = "";

    for (int i = 0; i < n; i++) {

        char *s = words[i];
        int left = 0;
        int right = strlen(s) - 1;
        int ok = 1;
        while (left < right) {
            if (s[left] != s[right]) {
                ok = 0;
                break;
            }
            left++;
            right--;
        }

        if (ok) {
            strcpy(result, s);
            break;
        }
    }

    printf("First Palindromic String: %s\n", result);

    return 0;
}
