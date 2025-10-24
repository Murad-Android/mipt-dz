#include <stdio.h>

int main(void) {
    int value;
    int max_val, min_val;
    int max_idx = 1, min_idx = 1;

    for (int i = 1; i <= 10; ++i) {
        if (scanf("%d", &value) != 1) return 0;
        if (i == 1) {
            max_val = min_val = value;
        } else {
            if (value > max_val) { max_val = value; max_idx = i; }
            if (value < min_val) { min_val = value; min_idx = i; }
        }
    }

    printf("%d %d %d %d\n", max_idx, max_val, min_idx, min_val);
    return 0;
}