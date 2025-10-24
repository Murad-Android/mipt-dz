#include <stdio.h>

int grow_up(int n) {
    if (n == 0) return 1;                 // единственная цифра – подходит

    int digits[12];
    int len = 0;
    while (n > 0) {
        digits[len++] = n % 10;            // сохраняем в обратном порядке
        n /= 10;
    }

    /* проверяем строгое возрастание слева направо */
    for (int i = len - 1; i > 0; --i) {   // i – позиция более старшего разряда
        if (digits[i - 1] <= digits[i])    // следующая цифра должна быть больше
            return 0;
    }
    return 1;
}

int main(void) {
    int n;
    if (scanf("%d", &n) != 1) return 0;

    printf("%s\n", grow_up(n) ? "YES" : "NO");
    return 0;
}