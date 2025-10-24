#include <stdio.h>
#include <string.h>

int main(void)
{
    FILE *fin  = fopen("input.txt", "r");
    FILE *fout = fopen("output.txt", "w");
    if (!fin || !fout) return 1;

    char s[1005];
    if (!fgets(s, sizeof s, fin)) {
        fclose(fin);
        fclose(fout);
        return 0;
    }
    fclose(fin);

    /* убрать перевод строки в конце */
    size_t len = strlen(s);
    while (len && (s[len - 1] == '\n' || s[len - 1] == '\r')) {
        s[--len] = '\0';
    }

    if (len == 0) {               /* пустая строка */
        fclose(fout);
        return 0;
    }

    char last = s[len - 1];
    int first = 1;                 /* нужен флаг для пробела */

    for (size_t i = 0; i + 1 < len; ++i) {   /* до предпоследнего символа */
        if (s[i] == last) {
            if (!first) fputc(' ', fout);
            fprintf(fout, "%zu", i);          /* индексы считаются с 0 */
            first = 0;
        }
    }

    fclose(fout);
    return 0;
}