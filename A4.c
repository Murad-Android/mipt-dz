#include <stdio.h>

int main() {
    int a, b, c;

    // Ввод трех целых чисел
    // printf("Enter three integers: ");
    scanf("%d %d %d", &a, &b, &c);

    // Нахождение суммы и произведения
    int sum = a + b + c;
    int product = a * b * c;

    // Печать результата
    printf("%d+%d+%d=%d\n", a, b, c, sum);
    printf("%d*%d*%d=%d\n", a, b, c, product);

    return 0;
}