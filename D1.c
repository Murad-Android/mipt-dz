#include <stdio.h>

void print_rec(int n) {
    if (n == 0) return;
    print_rec(n - 1);
    printf("%d ", n);
}

int main(void) {
    int N;
    if (scanf("%d", &N) != 1) return 0;
    print_rec(N);
    return 0;
}