#include <stdio.h>

int trace(int n, int a[n][n])
{
    int sum = 0;
    for (int i = 0; i < n; ++i)
        sum += a[i][i];
    return sum;
}

int main(void)
{
    const int N = 5;
    int m[N][N];
    
    /* чтение 25 чисел */
    for (int i = 0; i < N; ++i)
        for (int j = 0; j < N; ++j)
            if (scanf("%d", &m[i][j]) != 1) return 0;
    
    printf("%d\n", trace(N, m));
    return 0;
}