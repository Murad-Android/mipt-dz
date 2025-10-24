#include <stdio.h>

void print_simple(int n) {
    int first = 1;                     // флаг для пробела

    for (int d = 2; d * d <= n; ++d) {   // проверяем делители до √n
        while (n % d == 0) {
            if (!first) putchar(' ');
            printf("%d", d);
            first = 0;
            n /= d;
        }
    }

    if (n > 1) {                       // оставшийся простой множитель
        if (!first) putchar(' ');
        printf("%d", n);
    }
}

int main(void) {
    int N;
    if (scanf("%d", &N) == 1) {
        print_simple(N);                // выводим простые множители
    }
    return 0;
}