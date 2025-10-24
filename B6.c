#include <stdio.h>

int main() {
    int n;
    
    // printf("Введите целое число: ");
    scanf("%d", &n);
    
    int prev_digit = -1;
    while (n > 0) {
        int digit = n % 10;
        if (digit == prev_digit) {
            printf("YES\n");
            return 0;
        }
        prev_digit = digit;
        n /= 10;
    }
    
    printf("NO\n");
    
    return 0;
}