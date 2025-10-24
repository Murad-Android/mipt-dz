#include <stdio.h>

/* функция возведения в степень */
int power(int n, int p) {
    long long result = 1;
    long long base = n;
    while (p > 0) {
        if (p & 1)
            result *= base;
        base *= base;
        p >>= 1;
    }
    return (int)result;
}

int main(void) {
    int N, P;
    if (scanf("%d %d", &N, &P) != 2) return 0;

    int ans = power(N, P);
    printf("%d\n", ans);   // выводим результат
    return 0;
}