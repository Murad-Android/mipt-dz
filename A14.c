#include <stdio.h>

int main() {
    int num;
    
    // printf("Введите целое положительное трехзначное число: ");
    scanf("%d", &num);
    
    // найти максимальную цифру
    int max_digit = (num / 100);
    if (((num % 100) / 10) > max_digit) {
        max_digit = ((num % 100) / 10);
    }
    if ((num % 10) > max_digit) {
        max_digit = (num % 10);
    }
    
    printf("%d\n", max_digit);
    
    return 0;
}