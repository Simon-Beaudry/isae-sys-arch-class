#include <assert.h>
#include <stdbool.h>
#include <stdio.h>

#define N_MAX 13

bool fact(int n, int *res) {
    if (n >= N_MAX) {
        return false;
    }

    *res = 1;

    for (int i = 1; i <= n; i++) {
        *res  *= i;
    }

    return true;
}

void print_fact(int n) {
    int  res     = 0;
    bool fact_ok = fact(n, &res);

    if (fact_ok) {
        printf("%d! = %d\n", n ,res);
    } else {
        printf("%d! is not representable with C integers!\n", n);
        assert (res == 0);
    }
}

int main(void) {
    for (int i = 0; i < 20; i++) {
        print_fact(i);
    }

    return 0;
}
