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

    size_t len = strlen(line);
    while (len && (line[len - 1] == '\n' || line[len - 1] == '\r')) line[--len] = '\0';

    char best[1005] = "";
    char cur[1005];
    int i = 0, j = 0;

    for (i = 0; ; ++i) {
        if (line[i] != ' ' && line[i] != '\0') {
            cur[j++] = line[i];
        } else {
            cur[j] = '\0';
            if (j > 0 && strlen(cur) > strlen(best))
                strcpy(best, cur);
            j = 0;
        }
        if (line[i] == '\0')
            break;
    }

    fprintf(fout, "%s", best);
    fclose(fout);
    return 0;
}