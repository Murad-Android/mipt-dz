#include <stdio.h>

int main() {
    int x1, y1, x2, y2;
    
    // printf("Введите координаты X1 Y1 X2 Y2: ");
    scanf("%d %d %d %d", &x1, &y1, &x2, &y2);
    
    // найти коэффициент k
    float k = (float)(y2 - y1) / (x2 - x1);
    
    // найти коэффициент b
    float b = y1 - k * x1;
    
    printf("%.2f %.2f\n", k, b);
    
    return 0;
}