#include <stdio.h>

/* Рекурсивно ищет максимум в последовательности,
   заканчивающейся нулём. */
int max_find(int cur_max) {
    int x;
    if (scanf("%d", &x) != 1 || x == 0)
        return cur_max;          /* конец последовательности */

    if (x > cur_max)
        cur_max = x;

    return max_find(cur_max);    /* рекурсивный вызов */
}

int main(void) {
    int first;
    if (scanf("%d", &first) != 1)   /* пустой ввод */
        return 0;

    printf("%d\n", max_find(first));
    return 0;
}