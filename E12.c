#include <stdio.h>

void sort_asc(int *a, int n) {
    for (int i = 0; i < n - 1; ++i)
        for (int j = i + 1; j < n; ++j)
            if (a[i] > a[j]) {
                int t = a[i];
                a[i] = a[j];
                a[j] = t;
            }
}

void sort_desc(int *a, int n) {
    for (int i = 0; i < n - 1; ++i)
        for (int j = i + 1; j < n; ++j)
            if (a[i] < a[j]) {
                int t = a[i];
                a[i] = a[j];
                a[j] = t;
            }
}

int main(void) {
    int a[10];

    for (int i = 0; i < 10; ++i) {
        if (scanf("%d", &a[i]) != 1) return 0;
    }

    sort_asc(a, 5);          // первая половина: индексы 0..4
    sort_desc(a + 5, 5);     // вторая половина: индексы 5..9

    for (int i = 0; i < 10; ++i) {
        if (i) putchar(' ');
        printf("%d", a[i]);
    }
    return 0;
}