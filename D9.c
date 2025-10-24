#include <stdio.h>

int sum_digits(int n)
{
    if (n == 0)
        return 0;
    return n % 10 + sum_digits(n / 10);
}

int main(void)
{
    int N;
    if (scanf("%d", &N) != 1) return 0;

    printf("%d\n", sum_digits(N));
    return 0;
}