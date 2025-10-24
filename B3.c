#include <stdio.h>

int main() {
    int a, b;
    int sum = 0;
    
    // printf("Введите два целых числа: ");
    scanf("%d %d", &a, &b);
    
    for (int i = a; i <= b; i++) {
        sum += i * i;
    }
    
    printf("%d\n", sum);
    
    return 0;
}