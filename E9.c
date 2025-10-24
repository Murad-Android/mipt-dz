#include <stdio.h>

int main(void) {
    int a[10];
    for (int i = 0; i < 10; ++i) {
        if (scanf("%d", &a[i]) != 1) return 0;
    }

    /* cyclic shift right by one */
    int last = a[9];
    for (int i = 9; i > 0; --i)
        a[i] = a[i - 1];
    a[0] = last;

    for (int i = 0; i < 10; ++i) {
        if (i) putchar(' ');
        printf("%d", a[i]);
    }
    putchar('\n');
    return 0;
}