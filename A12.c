#include <stdio.h>

int main() {
    int num;
    
    // printf("Введите трехзначное целое положительное число: ");
    scanf("%d", &num);
    
    // найти сумму цифр
    int sum = (num / 100) + ((num % 100) / 10) + (num % 10);
    
    printf("%d\n", sum);
    
    return 0;
}