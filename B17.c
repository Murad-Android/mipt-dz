#include <stdio.h>

int main(void) {
    long long N;
    if (scanf("%lld", &N) != 1) return 0;   // ввод

    int first = 1;                           // флаг для вывода пробела
    for (long long x = 10; x <= N; ++x) {
        long long t = x;
        int sum  = 0;
        int prod = 1;

        while (t > 0) {
            int d = t % 10;      // текущая цифра
            sum  += d;
            prod *= d;
            t /= 10;
        }

        if (sum == prod) {
            if (!first) printf(" ");
            printf("%lld", x);
            first = 0;
        }
    }
    printf("\n");
    return 0;
}