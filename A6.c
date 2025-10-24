#include <stdio.h>

int main() {
    int a, b;

    // Ввод двух целых чисел
    // printf("Enter two integers: ");
    scanf("%d %d", &a, &b);

    // Нахождение разности
    int difference = a - b;

    // Печать результата
    printf("%d\n", difference);

    return 0;
}