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
        if (p[0] == 'L' && p[1] == 'i' && p[2] == 'n' && p[3] == 'g') {
            fputs("Cao", fout);
            p += 4;               // skip the matched word "Ling"
        } else {
            fputc(*p, fout);
            ++p;
        }
    }

    fclose(fout);
    return 0;
}