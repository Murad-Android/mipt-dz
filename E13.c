#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int src[10];
    int dst[10];
    int cnt = 0;

    /* ввод 10 чисел */
    for (int i = 0; i < 10; ++i) {
        if (scanf("%d", &src[i]) != 1) return 0;
    }

    /* отбор чисел, у которых десятковый разряд == 0 */
    for (int i = 0; i < 10; ++i) {
        int d = abs(src[i]) / 10 % 10;   // цифра десятков
        if (d == 0) {
            dst[cnt++] = src[i];
        }
    }

    /* вывод отобранных чисел через пробел */
    for (int i = 0; i < cnt; ++i) {
        if (i) putchar(' ');
        printf("%d", dst[i]);
    }
    return 0;
}