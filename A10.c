#include <stdio.h>

int main() {
    int a, b, c, d, e;
    
    // printf("Введите пять целых чисел: ");
    scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);
    
    if (a <= b && a <= c && a <= d && a <= e) {
        printf("%d\n", a);
    } else if (b <= a && b <= c && b <= d && b <= e) {
        printf("%d\n", b);
    } else if (c <= a && c <= b && c <= d && c <= e) {
        printf("%d\n", c);
    } else if (d <= a && d <= b && d <= c && d <= e) {
        printf("%d\n", d);
    } else {
        printf("%d\n", e);
    }
    
    return 0;
}