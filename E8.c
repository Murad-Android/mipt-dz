#include <stdio.h>

int main(void) {
    int a[12];
    for (int i = 0; i < 12; ++i) {
        if (scanf("%d", &a[i]) != 1) return 0;
    }

    /* инверсия каждой трети (по 4 элемента) */
    for (int seg = 0; seg < 3; ++seg) {
        int l = seg * 4;
        int r = l + 3;
        while (l < r) {
            int tmp = a[l];
            a[l] = a[r];
            a[r] = tmp;
            ++l;
            --r;
        }
    }

    for (int i = 0; i < 12; ++i) {
        if (i) putchar(' ');
        printf("%d", a[i]);
    }
    return 0;
}