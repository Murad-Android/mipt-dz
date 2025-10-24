#include <stdio.h>
#include <stdint.h>

uint64_t grains(unsigned int n) {
    return 1ULL << (n - 1);   // 2^(n-1)
}

int main(void) {
    unsigned int N;
    if (scanf("%u", &N) != 1) return 0;
    printf("%llu\n", (unsigned long long)grains(N));
    return 0;
}