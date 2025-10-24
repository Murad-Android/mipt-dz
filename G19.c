#include <stdio.h>
#include <string.h>

#define MAX_LEN 1005   /* максимум входной строки + терминатор */

int main(void)
{
    FILE *fin  = fopen("input.txt", "r");
    FILE *fout = fopen("output.txt", "w");
    if (!fin || !fout) return 1;

    char s[MAX_LEN];
    if (!fgets(s, sizeof s, fin)) {
        fclose(fin);
        fclose(fout);
        return 0;
    }
    fclose(fin);

    /* убрать перевод строки, если он есть */
    size_t len = strlen(s);
    while (len && (s[len - 1] == '\n' || s[len - 1] == '\r'))
        s[--len] = '\0';

    int cnt[26] = {0};
    for (size_t i = 0; i < len; ++i)
        if (s[i] >= 'a' && s[i] <= 'z')
            ++cnt[s[i] - 'a'];

    /* формируем левую часть палиндрома в лексикографическом порядке */
    char left[MAX_LEN];
    int lpos = 0;
    for (int c = 0; c < 26; ++c) {
        int pairs = cnt[c] / 2;
        for (int k = 0; k < pairs; ++k)
            left[lpos++] = 'a' + c;
        cnt[c] %= 2;                /* оставшиеся нечётные символы */
    }
    left[lpos] = '\0';

    /* выбираем центральный символ: наименьший из оставшихся с нечётным числом */
    char middle = '\0';
    for (int c = 0; c < 26; ++c)
        if (cnt[c]) { middle = 'a' + c; break; }

    /* вывод палиндрома */
    fputs(left, fout);
    if (middle) fputc(middle, fout);
    for (int i = lpos - 1; i >= 0; --i)
        fputc(left[i], fout);
    fputc('\n', fout);

    fclose(fout);
    return 0;
}