#include <stdio.h>

int main() {
    int a, b;
    
   // printf("Введите два целых числа: ");
    scanf("%d %d", &a, &b);
    
    if (a > b) {
        printf("%d %d\n", b, a);
    } else {
        printf("%d %d\n", a, b);
    }
    
    return 0;
}