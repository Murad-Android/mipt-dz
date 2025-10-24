#include <stdio.h>

int main(void) {
    int ch;
    while ((ch = getchar()) != EOF && ch != '.') {   // читаем до точки
        if (ch >= 'A' && ch <= 'Z')
            putchar(ch + ('a' - 'A'));               // перевод в нижний регистр
        else
            putchar(ch);                             // остальные символы выводим без изменений
    }
    return 0;
}