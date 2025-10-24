#include <stdio.h>

int main(void) {
    long long n;
    if (scanf("%lld", &n) != 1) return 0;

    long long printed = 0;   // сколько уже вывели
    for (long long k = 1; printed < n; ++k) {
        for (long long i = 0; i < k && printed < n; ++i) {
            if (printed) putchar(' ');
            printf("%lld", k);
            ++printed;
        }
    }
    return 0;
}