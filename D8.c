#include <stdio.h>

void print_range(int a, int b)
{
    printf("%d", a);
    if (a != b) {
        putchar(' ');
        if (a < b)
            print_range(a + 1, b);   // возростание
        else
            print_range(a - 1, b);   // убывание
    }
}

int main(void)
{
    int A, B;
    if (scanf("%d %d", &A, &B) != 2) return 0;

    print_range(A, B);
    putchar('\n');
    return 0;
}