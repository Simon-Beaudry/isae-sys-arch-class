#include <stdio.h>

int main(void) {
    int j = 0;

    for (int i = 0; i < 500000000; i++) {
        j = j + 3 * i;
    }

    printf("j = %d\n", j);

    return 0;
}
