#include <stdio.h>

int is_prime(int n, int d) {
    if (n < 2)               return 0;          // 0 и 1 не просты
    if (d * d > n)           return 1;          // делитель больше √n → простое
    if (n % d == 0)          return 0;          // найден делитель
    return is_prime(n, d + 1);                 // проверяем следующий делитель
}

int main(void) {
    int n;
    if (scanf("%d", &n) != 1) return 0;

    printf("%s\n", is_prime(n, 2) ? "YES" : "NO");
    return 0;
}