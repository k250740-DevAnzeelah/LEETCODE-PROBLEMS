#include <stdio.h>
#include <string.h>

int main() {
    char string[50];

    printf("Enter a string: ");
    gets(string);

    int left = 0;
    int right = strlen(string) - 1;
    char temp;

    while (left < right) {
        temp = string[left];
        string[left] = string[right];
        string[right] = temp;

        left++;
        right--;
    }

    printf("Reversed string: %s\n", string);

    return 0;
}
