#include <stdio.h>
#include <string.h>

int main(void)
{
    FILE *fin  = fopen("input.txt", "r");
    FILE *fout = fopen("output.txt", "w");
    if (!fin || !fout) return 1;

    char buf[2005];
    size_t len = fread(buf, 1, sizeof(buf) - 1, fin);
    buf[len] = '\0';
    fclose(fin);

    const char *p = buf;
    while (*p) {
        if (p[0] == 'C' && p[1] == 'a' && p[2] == 'o') {
            fputs("Ling", fout);
            p += 3;               // skip "Cao"
        } else {
            fputc(*p, fout);
            ++p;
        }
    }

    fclose(fout);
    return 0;
}