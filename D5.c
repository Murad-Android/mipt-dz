#include <stdio.h>

void print_bin(unsigned long long n) {
    if (n > 1)
        print_bin(n / 2);
    putchar('0' + (n % 2));
}

int main(void) {
    unsigned long long N;
    if (scanf("%llu", &N) != 1) return 0;

    if (N == 0)
        putchar('0');
    else
        print_bin(N);
    putchar('\n');
    return 0;
}