#include <stdio.h>

/* Возвращает 1, если символ – цифра, иначе 0 */
int is_digit(char c) {
    return (c >= '0' && c <= '9') ? 1 : 0;
}

int main(void) {
    int ch;
    long long count = 0;

    /* Читаем символы до первой точки '.' (точка не считается) */
    while ((ch = getchar()) != EOF && ch != '.') {
        if (is_digit((char)ch))
            ++count;
    }

    printf("%lld\n", count);
    return 0;
}
