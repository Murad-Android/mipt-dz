#include <stdio.h>

int main() {
    int n;
    
    // printf("Введите целое число: ");
    scanf("%d", &n);
    
    int count_9 = 0;
    
    while (n > 0) {
        int digit = n % 10;
        if (digit == 9) {
            count_9++;
        }
        n /= 10;
    }
    
    if (count_9 == 1) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }
    
    return 0;
}