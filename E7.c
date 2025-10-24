#include <stdio.h>

int main(void) {
    int a[10];
    for (int i = 0; i < 10; ++i) {
        if (scanf("%d", &a[i]) != 1) return 0;
    }

    /* инверсия первой половины (индексы 0..4) */
    for (int i = 0; i < 2; ++i) {          // 5/2 = 2 целых шагов
        int tmp = a[i];
        a[i] = a[4 - i];
        a[4 - i] = tmp;
    }

    /* инверсия второй половины (индексы 5..9) */
    for (int i = 0; i < 2; ++i) {
        int idx1 = 5 + i;
        int idx2 = 9 - i;
        int tmp = a[idx1];
        a[idx1] = a[idx2];
        a[idx2] = tmp;
    }

    for (int i = 0; i < 10; ++i) {
        if (i) putchar(' ');
        printf("%d", a[i]);
    }
    return 0;
}