#include <stdio.h>

int fibonacci(int n);

int fibonacci(int n) {
    if ((n == 0) || (n == 1)) {
        return n;
    } else {
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}

int main(void) {
    printf("The %dth Fibonacci number is %d\n", 45, fibonacci(45));

    return 0;
}
