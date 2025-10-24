#include <stdio.h>

int main(void) {
    unsigned long long n;
    if (scanf("%llu", &n) != 1) return 0;

    if (n == 0) {
        printf("0");
        return 0;
    }

    int first = 1;
    while (n > 0) {
        unsigned digit = n % 10;
        if (!first) putchar(' ');
        printf("%u", digit);
        first = 0;
        n /= 10;
    }
    return 0;
}