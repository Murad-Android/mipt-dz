#include <stdio.h>

long long sum_to_n(long long n) {
    return n * (n + 1) / 2;   // формула суммы арифметической прогрессии
}

int main(void) {
    long long N;
    if (scanf("%lld", &N) != 1) return 0;
    printf("%lld\n", sum_to_n(N));
    return 0;
}