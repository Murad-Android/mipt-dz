#include <stdio.h>
#include <string.h>

int main(void)
{
    FILE *fin  = fopen("input.txt", "r");
    FILE *fout = fopen("output.txt", "w");
    if (!fin || !fout) return 1;

    char line[1005];
    if (!fgets(line, sizeof line, fin)) {
        fclose(fin);
        fclose(fout);
        return 0;
    }
    fclose(fin);

    /* удалить перевод строки в конце */
    size_t len = strlen(line);
    while (len && (line[len - 1] == '\n' || line[len - 1] == '\r'))
        line[--len] = '\0';

    char *p = line;
    while (*p) {
        /* пропустить ведущие пробелы */
        while (*p == ' ') ++p;
        if (!*p) break;

        /* найти конец текущего слова */
        char *q = p;
        while (*q && *q != ' ') ++q;

        /* вывести слово */
        fwrite(p, 1, q - p, fout);
        fputc('\n', fout);

        p = q;
    }

    fclose(fout);
    return 0;
}