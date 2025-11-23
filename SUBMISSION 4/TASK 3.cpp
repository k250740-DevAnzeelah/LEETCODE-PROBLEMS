#include <stdio.h>
#include <string.h>

struct student {
    int age;
    char first_name[50];
    char last_name[50];
    int standard;
};

int main() {
    struct student st;

    scanf("%d %s %s %d", &st.age, st.first_name, st.last_name, &st.standard);
    printf("%d %s %s %d", st.age, st.first_name, st.last_name, st.standard);

    return 0;
}
