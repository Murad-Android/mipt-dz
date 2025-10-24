#include <stdio.h>
#include <stdbool.h>

int main(void) {
    long long n;
    if (scanf("%lld", &n) != 1) return 0;

    if (n <= 1) {                     // 0 и 1 не являются простыми
        printf("NO\n");
        return 0;
    }
    if (n == 2 || n == 3) {           // маленькие простые числа
        printf("YES\n");
        return 0;
    }
    if (n % 2 == 0) {                 // исключаем чётные >2
        printf("NO\n");
        return 0;
    }

    bool prime = true;
    for (long long i = 3; i * i <= n; i += 2) {
        if (n % i == 0) {
            prime = false;
            break;
        }
    }

    printf("%s\n", prime ? "YES" : "NO");
    return 0;
}