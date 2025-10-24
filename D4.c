#include <stdio.h>

static int first_print = 1;   // флаг для вывода пробела между цифрами

void print_num(int num) {
    if (num >= 10)
        print_num(num / 10);          // выводим старшие разряды рекурсивно
    if (!first_print) putchar(' ');
    printf("%d", num % 10);           // текущая цифра
    first_print = 0;
}

int main(void) {
    int N;
    if (scanf("%d", &N) != 1) return 0;
    print_num(N);
    return 0;
}