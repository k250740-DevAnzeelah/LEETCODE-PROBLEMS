#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char s[50];
    printf("Enter a string: ");
    gets(s);

    int left = 0;
    int right = strlen(s) - 1;
    char temp;
    while (left < right) {
        while (left < right) {
            char c = tolower(s[left]);
            if (c=='a' || c=='e' || c=='i' || c=='o' || c=='u')
                break;
            left++;
        }
        while (left < right) {
            char c = tolower(s[right]);
            if (c=='a' || c=='e' || c=='i' || c=='o' || c=='u')
                break;
            right--;
        }
        if (left < right) {
            temp = s[left];
            s[left] = s[right];
            s[right] = temp;

            left++;
            right--;
        }
    }

    printf("Reversed vowels string: %s\n", s);

    return 0;
}
