#include <stdio.h>

long long sum_rec(int n) {
    if (n <= 0)
        return 0;
    return n + sum_rec(n - 1);
}

int main(void) {
    int N;
    if (scanf("%d", &N) != 1) return 0;

    printf("%lld\n", sum_rec(N));
    return 0;
}