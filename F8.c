#include <stdio.h>
#include <stdbool.h>

int main(void) {
    bool present[1001] = { false };
    int x;
    int min_val = 1001, max_val = -1;
    int count = 0;

    while (scanf("%d", &x) == 1 && x != 0) {
        if (x >= 1 && x <= 1000) {
            present[x] = true;
            if (x < min_val) min_val = x;
            if (x > max_val) max_val = x;
            ++count;
        }
    }

    /* expected total number of elements */
    int total_len = count + 1;

    if ((max_val - min_val + 1) == total_len) {
        /* missing inside the interval */
        for (int i = min_val; i <= max_val; ++i) {
            if (!present[i]) {
                printf("%d\n", i);
                return 0;
            }
        }
    } else { /* missing is at one of the ends */
        if (min_val > 1 && !present[min_val - 1]) {
            printf("%d\n", min_val - 1);
        } else {
            printf("%d\n", max_val + 1);
        }
    }

    return 0;
}