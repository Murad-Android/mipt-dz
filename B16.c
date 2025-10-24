#include <stdio.h>

int main(void) {
    long long a, b;
    
    /* 1. Ввод двух чисел */
    if (scanf("%lld %lld", &a, &b) != 2) return 0;

    /* 2. Алгоритм Евклида */
    while (b != 0) {
        long long r = a % b;
        a = b;
        b = r;
    }

    /* 3. Вывод результата */
    printf("%lld\n", a);
    return 0;
}