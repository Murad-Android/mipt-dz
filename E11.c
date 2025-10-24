#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int a[10];
    for (int i = 0; i < 10; ++i) {
        if (scanf("%d", &a[i]) != 1) return 0;
    }

    /* сортировка по последней цифре (по возрастанию) */
    for (int i = 0; i < 9; ++i) {
        int min_idx = i;
        int min_last = abs(a[i]) % 10;
        for (int j = i + 1; j < 10; ++j) {
            int cur_last = abs(a[j]) % 10;
            if (cur_last < min_last) {
                min_last = cur_last;
                min_idx = j;
            }
        }
        if (min_idx != i) {
            int tmp = a[i];
            a[i] = a[min_idx];
            a[min_idx] = tmp;
        }
    }

    for (int i = 0; i < 10; ++i) {
        if (i) putchar(' ');
        printf("%d", a[i]);
    }
    return 0;
}