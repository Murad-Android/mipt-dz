#include <stdio.h>

/* Преобразует символ цифры в её числовое значение */
int digit_to_num(char c) {
    return (c >= '0' && c <= '9') ? (c - '0') : 0;
}

int main(void) {
    int ch;
    long long sum = 0;

    /* Читаем символы до первой точки '.' (точка не учитывается) */
    while ((ch = getchar()) != EOF && ch != '.') {
        if (ch >= '0' && ch <= '9')
            sum += digit_to_num((char)ch);
    }

    printf("%lld\n", sum);
    return 0;
}