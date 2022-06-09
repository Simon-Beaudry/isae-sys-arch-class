#include <stdio.h>

int memoization_array[1000] = { 0, [0]=0, [1]=1 };

int fibonacci(int n);

int fibonacci(int n) {
    if (n == 0 || memoization_array[n] != 0) {
        return memoization_array[n];
    } else {
        int fib = 0;

        fib = fibonacci(n - 2) + fibonacci(n - 1);
        memoization_array[n] = fib;

        return fib;
    }
}

int main(void) {
    printf("fibonacci(500) = %d\n", fibonacci(500));

    return 0;
}
