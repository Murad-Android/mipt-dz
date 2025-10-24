#include <stdio.h>

int main() {
    int a, b, c, d, e;
    int max, min;
    
    // printf("Введите пять целых чисел через пробел: ");
    scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);
    
    // найти максимум
    if (a >= b && a >= c && a >= d && a >= e) {
        max = a;
    } else if (b >= a && b >= c && b >= d && b >= e) {
        max = b;
    } else if (c >= a && c >= b && c >= d && c >= e) {
        max = c;
    } else if (d >= a && d >= b && d >= c && d >= e) {
        max = d;
    } else {
        max = e;
    }
    
    // найти минимум
    if (a <= b && a <= c && a <= d && a <= e) {
        min = a;
    } else if (b <= a && b <= c && b <= d && b <= e) {
        min = b;
    } else if (c <= a && c <= b && c <= d && c <= e) {
        min = c;
    } else if (d <= a && d <= b && d <= c && d <= e) {
        min = d;
    } else {
        min = e;
    }
    
    // найти сумму максимума и минимума
    int sum = max + min;
    
    printf("%d\n", sum);
    
    return 0;
}