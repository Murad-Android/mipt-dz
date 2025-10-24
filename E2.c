#include <stdio.h>

int main(void) {
    int a, min;
    
    /* читаем первое число и считаем его текущим минимумом */
    if (scanf("%d", &a) != 1) return 0;
    min = a;

    /* читаем оставшиеся четыре числа, обновляя минимум */
    for (int i = 1; i < 5; ++i) {
        if (scanf("%d", &a) != 1) return 0;
        if (a < min) min = a;
    }

    printf("%d\n", min);
    return 0;
}