#include <stdio.h>

int main(void) {
    int x;
    int even_cnt = 0;

    /* Читаем числа пока не встретится ноль */
    while (scanf("%d", &x) == 1 && x != 0) {
        if (x % 2 == 0) {   // проверка на чётность
            ++even_cnt;
        }
    }

    printf("%d\n", even_cnt);
    return 0;
}