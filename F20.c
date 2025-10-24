#include <stdio.h>
#include <stdlib.h>

int prod_digits(int x, int even)          // even = 1 → чётные цифры, 0 → нечётные
{
    if (x == 0) return 0;
    int p = 1, have = 0;
    x = abs(x);
    while (x) {
        int d = x % 10;
        if ((d % 2 == 0) == even) { p *= d; have = 1; }
        x /= 10;
    }
    return have ? p : 1;                // если нужных цифр нет, возвращаем 1
}

int main(void)
{
    int a[10], ev = 0, od = 0;

    for (int i = 0; i < 10; ++i) {
        scanf("%d", &a[i]);
        if (a[i] % 2 == 0) ++ev;
        else                ++od;
    }

    if (ev > od) {                       // заменяем нечётные числа
        for (int i = 0; i < 10; ++i)
            if (a[i] % 2 != 0) a[i] = prod_digits(a[i], 0);
    } else {                             // заменяем чётные числа
        for (int i = 0; i < 10; ++i)
            if (a[i] % 2 == 0) a[i] = prod_digits(a[i], 1);
    }

    for (int i = 0; i < 10; ++i) {
        if (i) putchar(' ');
        printf("%d", a[i]);
    }
    return 0;
}