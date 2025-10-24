#include <stdio.h>
#include <math.h>

float sinus(float x) {
    float term = x;      // первый член ряда
    float sum  = term;
    int   n    = 1;     // текущий показатель степени (2n+1)

    while (fabsf(term) >= 0.001f) {
        /* вычисляем следующий член: term *= -x*x / ((2n)*(2n+1)) */
        term *= -x * x / ((float)(2 * n) * (2 * n + 1));
        sum += term;
        ++n;
    }
    return sum;
}

int main(void) {
    float deg;
    if (scanf("%f", &deg) != 1) return 0;

    /* перевод градусов в радианы */
    float rad = deg * (float)M_PI / 180.0f;

    printf("%.3f\n", sinus(rad));
    return 0;
}