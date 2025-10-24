#include <stdio.h>
#include <ctype.h>

int is_palindrom(const char *s)
{
    int cnt[26] = {0};

    for ( ; *s; ++s )
        if (*s >= 'a' && *s <= 'z')
            ++cnt[*s - 'a'];          // учитываем только буквы

    int odd = 0;
    for (int i = 0; i < 26; ++i)
        if (cnt[i] % 2) ++odd;

    return odd <= 1;                 // можно переставить в палиндром
}

int main(void)
{
    FILE *fin = fopen("input.txt", "r");
    if (!fin) return 1;

    char line[1005];
    if (!fgets(line, sizeof line, fin)) {
        fclose(fin);
        return 0;
    }
    fclose(fin);

    printf(is_palindrom(line) ? "YES\n" : "NO\n");
    return 0;
}