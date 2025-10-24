#include <stdio.h>

/* Рекурсивное возведение n в целую степень p (p ≥ 0) */
int recurs_power(int n, int p)
{
    if (p == 0)               // любое число в нулевой степени = 1
        return 1;
    if (p % 2 == 0) {         // чётный показатель: (n^(p/2))^2
        int half = recurs_power(n, p / 2);
        return half * half;
    } else {                   // нечётный показатель: n * n^(p‑1)
        return n * recurs_power(n, p - 1);
    }
}

int main(void)
{
    int n, p;
    if (scanf("%d %d", &n, &p) != 2) return 0;   // ввод n и p
    printf("%d\n", recurs_power(n, p));
    return 0;
}