#include <stdio.h>

int is_happy_number(int n) {
    if (n == 0) return 1;   // сумма и произведение обе равны 0
    int sum = 0;
    int prod = 1;
    while (n > 0) {
        int d = n % 10;
        sum += d;
        prod *= d;
        n /= 10;
    }
    return sum == prod;
}

int main(void) {
    int x;
    if (scanf("%d", &x) != 1) return 0;
    printf("%s\n", is_happy_number(x) ? "YES" : "NO");
    return 0;
}