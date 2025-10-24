#include <stdio.h>
#include <stdbool.h>

/* Возвращает 1, если n – простое число, иначе 0 */
int is_prime(int n) {
    if (n <= 1) return 0;          // 0 и 1 не являются простыми
    if (n == 2) return 1;          // единственное чётное простое
    if (n % 2 == 0) return 0;      // остальные чётные составные

    for (int i = 3; i * i <= n; i += 2) {
        if (n % i == 0) return 0;
    }
    return 1;
}

int main(void) {
    int x;
    if (scanf("%d", &x) != 1) return 0;

    printf("%s\n", is_prime(x) ? "YES" : "NO");
    return 0;
}