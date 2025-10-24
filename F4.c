#include <stdio.h>

/* Выводит все цифры, встречающиеся в строке s,
   в порядке возрастания. Для каждой цифры печатает:
   digit<space>count\n 
*/
void print_digit(char s[])
{
    int cnt[10] = {0};

    /* подсчёт цифр 
    */
    for (int i = 0; s[i] != '\0'; ++i) {
        char c = s[i];
        if (c >= '0' && c <= '9')
            ++cnt[c - '0'];
    }

    /* вывод в порядке возрастания 
    */
    for (int d = 0; d < 10; ++d) {
        if (cnt[d] > 0)
            printf("%d %d\n", d, cnt[d]);
    }
}