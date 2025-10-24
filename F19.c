#include <stdio.h>

#define N 5

double diagonal_average(const int m[N][N])
{
    long long sum = 0;
    for (int i = 0; i < N; ++i)
        sum += m[i][i];
    return (double)sum / N;
}

int main(void)
{
    int a[N][N];
    for (int i = 0; i < N; ++i)
        for (int j = 0; j < N; ++j)
            if (scanf("%d", &a[i][j]) != 1) return 0;

    double avg = diagonal_average(a);
    int cnt = 0;
    for (int i = 0; i < N; ++i)
        for (int j = 0; j < N; ++j)
            if (a[i][j] > 0 && a[i][j] > avg)
                ++cnt;

    printf("%d\n", cnt);
    return 0;
}