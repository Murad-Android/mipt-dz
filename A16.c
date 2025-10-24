#include <stdio.h>

int main() {
    int a, b, c;
    
    // printf("Введите три целых числа: ");
    scanf("%d %d %d", &a, &b, &c);
    
    if (a == b && b == c) {
        printf("NO\n");
    } else if (a <= b && b <= c) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }
    
    return 0;
}