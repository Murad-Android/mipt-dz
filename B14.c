#include <stdio.h>

int main(void) {
    int x;
    int count = 0;

    /* Читаем числа пока не встретится ноль */
    while (scanf("%d", &x) == 1 && x != 0) {
        ++count;               // считаем только ненулевые элементы
    }

    printf("%d\n", count);
    return 0;
}