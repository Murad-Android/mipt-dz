#include <stdio.h>

int nod(int a, int b) {
    while (b != 0) {
        int r = a % b;
        a = b;
        b = r;
    }
    return a;
}

int main(void) {
    int x, y;
    if (scanf("%d %d", &x, &y) == 2) {
        printf("%d\n", nod(x, y));
    }
    return 0;
}