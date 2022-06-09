#include <stdio.h>

int main(void) {
    char my_string[] = "I love C";

    for (int i = 0; my_string[i] != '\0'; i++) {
        printf("%c\n", my_string[i]);
    }

    return 0;
}
