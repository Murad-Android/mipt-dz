#include <stdio.h>

int main() {
    int a, b, c, sum;

    // Ввод трех целых чисел
    // printf("Enter three integers:\n");
    scanf("%d %d %d", &a, &b, &c);

    // Нахождение суммы
    sum = a + b + c;

    // Печать результата
    printf("%d+%d+%d=%d\n", a, b, c, sum);

    return 0;
}