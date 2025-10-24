#include <stdio.h>
#include <stdbool.h>

int main(void)
{
    int a[10];
    int i, j;
    
    /* ввод массива */
    for (i = 0; i < 10; ++i) {
        if (scanf("%d", &a[i]) != 1) return 0;
    }

    bool printed[10] = { false };
    bool first = true;

    for (i = 0; i < 10; ++i) {
        /* уже выводили это число – пропускаем */
        if (printed[i]) continue;

        int cnt = 0;
        for (j = 0; j < 10; ++j) {
            if (a[j] == a[i]) {
                ++cnt;
                if (j != i && a[j] == a[i]) printed[j] = true; /* помечаем другие одинаковые */
            }
        }

        if (cnt > 1) {                 /* число встречается более одного раза */
            if (!first) putchar(' ');
            printf("%d", a[i]);
            first = false;
        }
    }
    return 0;
}