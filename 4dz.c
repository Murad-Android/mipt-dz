#include <stdio.h>

int main() {
    printf("=== Таблица истинности для A -> B ===\n");
    printf("A\tB\t!A\t!A||B\tA->B\n");
    printf("-------------------------------------\n");

    for (int a = 0; a <= 1; a++) {
        for (int b = 0; b <= 1; b++) {
            int not_a = !a;
            int impl_ab = not_a || b;  // A -> B == !A || B
            printf("%d\t%d\t%d\t%d\t%d\n", a, b, not_a, impl_ab, impl_ab);
        }
    }

    printf("\n=== Таблица истинности для A <-> B ===\n");
    printf("A\tB\tA&&B\t!A\t!B\t!A&&!B\t(A&&B)||(!A&&!B)\tA<->B\n");
    printf("------------------------------------------------------------------\n");

    for (int a = 0; a <= 1; a++) {
        for (int b = 0; b <= 1; b++) {
            int and_ab = a && b;
            int not_a = !a;
            int not_b = !b;
            int not_and = not_a && not_b;
            int equiv = and_ab || not_and;  // A <-> B == (A && B) || (!A && !B)
            printf("%d\t%d\t%d\t%d\t%d\t%d\t%d\t\t%d\n", a, b, and_ab, not_a, not_b, not_and, equiv, equiv);
        }
    }

    return 0;
}