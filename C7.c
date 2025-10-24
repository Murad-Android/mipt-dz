#include <stdio.h>

void to_base(unsigned long long n, int p, char *out) {
    char rev[128];
    int len = 0;
    if (n == 0) {
        rev[len++] = '0';
    } else {
        while (n > 0) {
            rev[len++] = '0' + (n % p);
            n /= p;
        }
    }
    for (int i = 0; i < len; ++i)
        out[i] = rev[len - 1 - i];
    out[len] = '\0';
}

int main(void) {
    unsigned long long N;
    int P;
    if (scanf("%llu %d", &N, &P) != 2) return 0;

    char result[128];
    to_base(N, P, result);
    printf("%s\n", result);
    return 0;
}