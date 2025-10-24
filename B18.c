#include <stdio.h>

int main(void) {
    long long n;                     // количество требуемых элементов
    if (scanf("%lld", &n) != 1) return 0;

    if (n <= 0) return 0;           // по условию n ≥ 1, но на всякий случай

    long long a = 1, b = 1;
    for (long long i = 1; i <= n; ++i) {
        if (i == 1) {
            printf("%lld", a);               // первое число
        } else if (i == 2) {
            printf(" %lld", b);              // второе число
        } else {
            long long c = a + b;             // следующее число Фибоначчи
            printf(" %lld", c);
            a = b;
            b = c;
        }
    }
    printf("\n");
    return 0;
}