#include <stdio.h>

int main(void) {
    int x;
    int first = 1;                     // флаг для вывода пробела

    while (scanf("%d", &x) == 1 && x != 0) {
        if (x % 2 != 0) {              // число нечётное
            if (!first) putchar(' ');
            printf("%d", x);
            first = 0;
        }
    }
    return 0;
}