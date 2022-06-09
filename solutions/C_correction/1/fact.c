#include <stdio.h>

int main(void) {
    long long int fact = 1;
    int           n    = 0;

    printf("Value of n? ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        fact = fact * i;
    }

    printf("%d! = %Ld\n", n, fact);

    return 0;
}
