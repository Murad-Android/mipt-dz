#include <stdio.h>

int max_in_row(const int row[10])
{
    int mx = row[0];
    for (int i = 1; i < 10; ++i)
        if (row[i] > mx)
            mx = row[i];
    return mx;
}

int main(void)
{
    const int N = 10;
    int a[N][N];
    long long total = 0;

    for (int i = 0; i < N; ++i)
        for (int j = 0; j < N; ++j)
            if (scanf("%d", &a[i][j]) != 1) return 0;

    for (int i = 0; i < N; ++i)
        total += max_in_row(a[i]);

    printf("%lld\n", total);
    return 0;
}