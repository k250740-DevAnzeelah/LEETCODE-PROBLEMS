#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int l, w, h;

    for(int i = 0; i < n; i++) {
        scanf("%d %d %d", &l, &w, &h);

        if(h < 41) {
            int volume = l * w * h;
            printf("%d\n", volume);
        }
    }

    return 0;
}
