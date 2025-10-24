#include <stdio.h>
#include <stdbool.h>

/* Возвращает true, если сумма цифр числа n чётная */
bool is_sum_even(unsigned long long n) {
    unsigned int sum = 0;
    while (n > 0) {
        sum += n % 10ULL;
        n /= 10ULL;
    }
    return (sum % 2U) == 0U;
}

int main(void) {
    unsigned long long x;
    if (scanf("%llu", &x) != 1) return 0;   // ввод одного неотрицательного числа

    if (is_sum_even(x))
        printf("YES\n");
    else
        printf("NO\n");

    return 0;
}