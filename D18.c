#include <stdio.h>

static int first = 1;   // признак вывода первого элемента

/* Рекурсивно выводит цифры числа n слева‑направо, разделяя их пробелом */
void print_digits(int n)
{
    if (n >= 10)                 /* печатаем старшие разряды */
        print_digits(n / 10);

    if (!first) putchar(' ');
    printf("%d", n % 10);
    first = 0;
}

int main(void)
{
    int N;
    if (scanf("%d", &N) != 1) return 0;

    print_digits(N);
    putchar('\n');
    return 0;
}