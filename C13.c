#include <stdio.h>
#include <math.h>

float cosinus(float x) {
    float term = 1.0f;   // первый член ряда
    float sum  = term;
    int n = 1;           // текущий показатель степени (2n)

    while (fabsf(term) >= 0.001f) {
        /* вычисляем следующий член:
           term *= -x*x / ((2n-1)*(2n))   */
        term *= -x * x / ((float)(2 * n - 1) * (2 * n));
        sum += term;
        ++n;
    }
    return sum;
}

int main(void) {
    int deg;
    if (scanf("%d", &deg) != 1) return 0;   // ввод градусов от 0 до 90

    float rad = deg * (float)M_PI / 180.0f;   // перевод в радианы
    printf("%.3f\n", cosinus(rad));
    return 0;
}