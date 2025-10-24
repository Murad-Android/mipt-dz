#include <stdio.h>

int main() {
    int a, b, c;

    // Ввод трех целых чисел
   // printf("Enter three integers: ");
    scanf("%d %d %d", &a, &b, &c);

    // Нахождение среднего арифметического
    float average = (float)(a + b + c) / 3;

    // Печать результата
    printf("%.2f\n", average);

    return 0;
}