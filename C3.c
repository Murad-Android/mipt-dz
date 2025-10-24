#include <stdio.h>

/* функция среднего арифметического */
int middle(int a, int b) {
    return (a + b) / 2;   // целочисленное деление
}

int main(void) {
    int x, y;
    if (scanf("%d %d", &x, &y) != 2) return 0;

    printf("%d\n", middle(x, y));
    return 0;
}