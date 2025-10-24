#include <stdio.h>
#include <string.h>

/* Подсчёт количества каждой цифры в строке s */
void count_digits(const char *s, int cnt[10])
{
    for (int i = 0; i < 10; ++i) cnt[i] = 0;
    for (size_t i = 0; s[i] != '\0'; ++i) {
        char c = s[i];
        if (c >= '0' && c <= '9')
            ++cnt[c - '0'];
    }
}

/* Демонстрация работы функции */
int main(void)
{
    char num[1005];                     /* N ≤ 1000 цифр + '\0' */
    if (scanf("%1004s", num) != 1) return 0;

    int cnt[10];
    count_digits(num, cnt);

    for (int d = 0; d < 10; ++d) {
        if (cnt[d] > 0) {              /* выводим только встречающиеся цифры */
            printf("%d %d\n", d, cnt[d]);
        }
    }
    return 0;
}