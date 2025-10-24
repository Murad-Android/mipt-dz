#include <stdio.h>

/* Рекурсивная проверка: является ли n точной степенью двойки.
   Возвращает 1 – да, 0 – нет. */
int is2pow(int n) {
    if (n == 1)               return 1;      // 2^0
    if (n == 0 || n % 2 != 0) return 0;      // ноль или нечётное → не степень двойки
    return is2pow(n / 2);                      // проверяем дальше
}

int main(void) {
    int n;
    if (scanf("%d", &n) != 1) return 0;

    printf("%s\n", is2pow(n) ? "YES" : "NO");
    return 0;
}