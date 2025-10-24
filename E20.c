#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/* сравнение для сортировки по убыванию (символы‑цифры) */
int cmp_desc(const void *a, const void *b)
{
    return *(const char *)b - *(const char *)a;
}

int main(void)
{
    char s[256];

    /* читаем число как строку, чтобы работать с произвольной длиной */
    if (scanf("%255s", s) != 1) return 0;

    size_t len = strlen(s);
    qsort(s, len, sizeof(char), cmp_desc);   /* сортируем цифры по убыванию */

    printf("%s\n", s);
    return 0;
}