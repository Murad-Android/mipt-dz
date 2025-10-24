#include <stdio.h>

void print_desc(int n) {
    if (n <= 0) return;          // базовый случай
    printf("%d", n);
    if (n > 1) putchar(' ');
    print_desc(n - 1);            // рекурсивный вызов для n-1
}

int main(void) {
    int N;
    if (scanf("%d", &N) != 1) return 0;
    print_desc(N);
    return 0;
}