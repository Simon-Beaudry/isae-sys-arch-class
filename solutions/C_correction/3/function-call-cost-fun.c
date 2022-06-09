#include <stdio.h>

void fun(int i, int j);

void fun(int i, int j) {
    j = j + 3 * i;
}

int main(void) {
    int j = 0;

    for (int i = 0; i < 500000000; i++) {
        fun(i, j);
    }

    printf("j = %d\n", j);

    return 0;
}
