#include <stdio.h>
#include <limits.h>

int main(void) {
    int x;
    int max1 = INT_MIN, max2 = INT_MIN;

    for (int i = 0; i < 10; ++i) {
        if (scanf("%d", &x) != 1) return 0;
        if (x > max1) {
            max2 = max1;
            max1 = x;
        } else if (x > max2) {
            max2 = x;
        }
    }

    printf("%d\n", max1 + max2);
    return 0;
}