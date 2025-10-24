#include <stdio.h>

int main(void) {
    int a[12];
    for (int i = 0; i < 12; ++i) {
        if (scanf("%d", &a[i]) != 1) return 0;
    }

    /* cyclic shift right by 4 */
    int tmp[4];
    for (int i = 0; i < 4; ++i)
        tmp[i] = a[12 - 4 + i];          // save last 4 elements

    for (int i = 11; i >= 4; --i)
        a[i] = a[i - 4];                 // shift the rest right

    for (int i = 0; i < 4; ++i)
        a[i] = tmp[i];                    // place saved elements at start

    for (int i = 0; i < 12; ++i) {
        if (i) putchar(' ');
        printf("%d", a[i]);
    }
    return 0;
}