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

    /* убрать перевод строки в конце */
    size_t len = strlen(line);
    while (len && (line[len - 1] == '\n' || line[len - 1] == '\r')) {
        line[--len] = '\0';
    }

    int count = 0;
    for (size_t i = 0; i <= len; ++i) {
        if (i == len || line[i] == ' ') {          /* конец слова */
            if (i > 0) {
                char last = line[i - 1];
                if (last == 'a' || last == 'A')
                    ++count;
            }
        }
    }

    fprintf(fout, "%d", count);
    fclose(fout);
    return 0;
}