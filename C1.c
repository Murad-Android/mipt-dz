#include <stdio.h>

int abs_int(int x) {
    return (x < 0) ? -x : x;
}

int main(void) {
    int n;
    if (scanf("%d", &n) != 1) return 0;   // ввод числа

    int result = abs_int(n);                // вычисление модуля
    printf("%d\n", result);                 // вывод результата (неотрицательное)

    return 0;
}