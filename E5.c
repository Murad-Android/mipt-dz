#include <stdio.h>

int main(void) {
    int x;
    long long sum = 0;   // используем более широкий тип для избежания переполнения

    for (int i = 0; i < 10; ++i) {
        if (scanf("%d", &x) != 1) return 0;
        if (x > 0) sum += x;
    }

    printf("%lld\n", sum);
    return 0;
}