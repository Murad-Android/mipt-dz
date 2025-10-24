#include <stdio.h>

static int first = 1;

/* Рекурсивный вывод всех простых множителей числа n (с учётом кратности) */
void print_factors(unsigned long long n)
{
    if (n == 1) return;               /* база рекурсии */

    /* делитель 2 обрабатываем отдельно – ускорит работу */
    if (n % 2 == 0) {
        if (!first) putchar(' ');
        printf("2");
        first = 0;
        print_factors(n / 2);
        return;
    }

    /* ищем наименьший нечётный делитель */
    unsigned long long d;
    for (d = 3; d * d <= n; d += 2) {
        if (n % d == 0) break;       /* найден делитель */
    }
    /* если цикл завершился без нахождения делителя, то n простое */
    if (d * d > n) d = n;

    if (!first) putchar(' ');
    printf("%llu", d);
    first = 0;

    print_factors(n / d);              /* рекурсивный вызов для частного */
}

int main(void)
{
    unsigned long long N;
    if (scanf("%llu", &N) != 1) return 0;

    print_factors(N);
    putchar('\n');
    return 0;
}