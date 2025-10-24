#include <stdio.h>

int main(void) {
    int x;
    long long sum = 0;   // накопитель суммы

    for (int i = 0; i < 12; ++i) {
        if (scanf("%d", &x) != 1) return 0;
        sum += x;
    }

    double avg = (double)sum / 12.0;
    printf("%.2f\n", avg);
    return 0;
}