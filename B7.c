#include <stdio.h>

int main() {
    int n;
    
    // printf("Введите целое число: ");
    scanf("%d", &n);
    
    int digits[10] = {0}; // массив для подсчета цифр
    
    while (n > 0) {
        int digit = n % 10;
        digits[digit]++;
        n /= 10;
    }
    
    for (int i = 0; i < 10; i++) {
        if (digits[i] >= 2) {
            printf("YES\n");
            return 0;
        }
    }
    
    printf("NO\n");
    
    return 0;
}