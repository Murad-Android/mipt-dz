#include <stdio.h>

unsigned long long factorial(int n)
{
    unsigned long long res = 1;
    for (int i = 2; i <= n; ++i) {
        res *= i;
    }
    return res;
}

int main(void)
{
    int n;
    if (scanf("%d", &n) != 1) return 0;
    printf("%llu\n", factorial(n));
    return 0;
}