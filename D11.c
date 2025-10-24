#include <stdio.h>

int count_ones(unsigned long long n) {
    int cnt = 0;
    while (n) {
        cnt += n & 1ULL;   // прибавляем последний бит
        n >>= 1;
    }
    return cnt;
}

int main(void) {
    unsigned long long N;
    if (scanf("%llu", &N) != 1) return 0;

    printf("%d\n", count_ones(N));
    return 0;
}