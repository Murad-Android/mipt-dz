#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    FILE *fin  = fopen("input.txt", "r");
    FILE *fout = fopen("output.txt", "w");
    if (!fin || !fout) return 1;

    /* читаем всю строку (до символа '\n' или EOF) */
    char src[2005];
    int len = 0, ch;
    while ((ch = fgetc(fin)) != EOF && ch != '\n') {
        if (len < 2004) src[len++] = (char)ch;
    }
    src[len] = '\0';
    fclose(fin);

    /* собираем все символы, кроме пробелов, во временный массив */
    char tmp[2005];
    int cnt = 0;
    for (int i = 0; i < len; ++i)
        if (src[i] != ' ')
            tmp[cnt++] = src[i];

    /* меняем местами соседние символы в tmp */
    for (int i = 0; i + 1 < cnt; i += 2) {
        char t   = tmp[i];
        tmp[i]   = tmp[i + 1];
        tmp[i+1] = t;
    }

    /* выводим результат, возвращая пробелы на их места */
    int pos = 0;                     // позиция в массиве tmp
    for (int i = 0; i < len; ++i) {
        if (src[i] == ' ')
            fputc(' ', fout);
        else {
            fputc(tmp[pos], fout);
            ++pos;
        }
    }

    fclose(fout);
    return 0;
}