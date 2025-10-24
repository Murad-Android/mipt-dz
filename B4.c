#include <stdio.h>

int main() {
    int n;
    
    // printf("Введите целое положительное число: ");
    scanf("%d", &n);
    
    int digits = 0;
    while (n > 0) {
        digits++;
        n /= 10;
    }
    
    if (digits == 3) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }
    
    return 0;
}