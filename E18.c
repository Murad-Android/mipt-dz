#include <stdio.h>

int main(void)
{
    int N;
    if (scanf("%d", &N) != 1) return 0;   // N > 2, ≤ 10000

    int cnt[10] = {0};                     // индексы 2..9 используются

    for (int i = 2; i <= N; ++i)
        for (int d = 2; d <= 9; ++d)
            if (i % d == 0) ++cnt[d];

    for (int d = 2; d <= 9; ++d)
        printf("%d %d%s", d, cnt[d], d == 9 ? "\n" : " ");

    return 0;
}