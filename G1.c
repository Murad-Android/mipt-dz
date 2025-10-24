#include <stdio.h>
#include <string.h>

int main(void)
{
    FILE *fin = fopen("input.txt", "r");
    if (!fin) return 1;

    char s[101];
    if (!fgets(s, sizeof(s), fin)) {
        fclose(fin);
        return 1;
    }
    fclose(fin);

    /* убрать перевод строки в конце */
    size_t len = strlen(s);
    while (len && (s[len - 1] == '\n' || s[len - 1] == '\r')) {
        s[--len] = '\0';
    }

    FILE *fout = fopen("output.txt", "w");
    if (!fout) return 1;

    fprintf(fout, "%s, %s, %s %zu", s, s, s, len);
    fclose(fout);
    return 0;
}