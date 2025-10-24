#include <stdio.h>
#include <ctype.h>

void trim_spaces(const char *src, char *dst)
{
    int i = 0, j = 0;
    /* skip leading spaces */
    while (src[i] && src[i] == ' ') ++i;

    for (; src[i]; ++i) {
        if (src[i] != ' ')
            dst[j++] = src[i];
        else {
            /* write one space and skip following spaces */
            dst[j++] = ' ';
            while (src[i + 1] && src[i + 1] == ' ') ++i;
        }
    }

    /* remove possible trailing space */
    if (j > 0 && dst[j - 1] == ' ') --j;

    dst[j] = '\0';
}

int main(void)
{
    FILE *fin  = fopen("input.txt", "r");
    FILE *fout = fopen("output.txt", "w");
    if (!fin || !fout) return 1;

    char line[2005];
    if (!fgets(line, sizeof line, fin)) {
        fclose(fin);
        fclose(fout);
        return 0;
    }
    fclose(fin);

    char result[2005];
    trim_spaces(line, result);
    fputs(result, fout);
    fclose(fout);
    return 0;
}