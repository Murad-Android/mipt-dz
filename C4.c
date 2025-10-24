#include <stdio.h>
#include <limits.h>

long long f(long long x) {
    if (x < -2)
        return 4;
    else if (x < 2)               // -2 ≤ x < 2
        return x * x;
    else                           // x ≥ 2
        return x * x + 4 * x + 5;
}

int main(void) {
    long long x, val, max_val = LLONG_MIN;

    while (scanf("%lld", &x) == 1 && x != 0) {
        val = f(x);
        if (val > max_val)
            max_val = val;
    }

    if (max_val != LLONG_MIN)
        printf("%lld\n", max_val);

    return 0;
}