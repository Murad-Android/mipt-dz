#include <stdio.h>

int main(void) {
    int pos[10], neg[10];
    int cnt_pos = 0, cnt_neg = 0;
    int x;

    for (int i = 0; i < 10; ++i) {
        if (scanf("%d", &x) != 1) return 0;
        if (x > 0)   pos[cnt_pos++] = x;
        else if (x < 0) neg[cnt_neg++] = x;   // ноль игнорируем
    }

    int first = 1;

    for (int i = 0; i < cnt_pos; ++i) {
        if (!first) putchar(' ');
        printf("%d", pos[i]);
        first = 0;
    }
    for (int i = 0; i < cnt_neg; ++i) {
        if (!first) putchar(' ');
        printf("%d", neg[i]);
        first = 0;
    }

    return 0;
}