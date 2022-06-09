#include <stdbool.h>
#include <stdio.h>

bool clean_stdin() {
    while (getchar() != '\n');

    return true;
}
 
int main(void) {
    int n = -1;

    while (n < 0) {
        printf("n value (MUST be positive)? ");
        scanf("%d", &n);
    }

    int my_array[n];

    for (int i = 0; i < n; i++) {
        printf("Enter integer at index %d ", i);

        while (scanf("%d", &my_array[i]) != 1 &&clean_stdin()) {
            printf("Please, enter an integer...\n");
        }
    }

    printf("[ ");

    for (int i = 0; i < n; i++) {
        printf("%d%s ", my_array[i], i == n - 1 ? "" : ",");
    }

    printf("]\n");

}
