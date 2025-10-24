#include <stdio.h>

int main(void) {
    int a[10];
    for (int i = 0; i < 10; ++i)
        if (scanf("%d", &a[i]) != 1) return 0;

    int first = 1;
    for (int i = 0; i < 10; ++i) {
        int cnt = 0;
        for (int j = 0; j < 10; ++j)
            if (a[j] == a[i]) ++cnt;
        if (cnt == 1) {
            if (!first) putchar(' ');
            printf("%d", a[i]);
            first = 0;
        }
    }
    return 0;
}