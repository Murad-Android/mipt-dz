#include <stdio.h>
#include <stdbool.h>

int main(void)
{
    FILE *fin  = fopen("input.txt", "r");
    FILE *fout = fopen("output.txt", "w");
    if (!fin || !fout) return 1;

    bool seen[256] = { false };
    int c;
    while ((c = fgetc(fin)) != EOF && c != '\n')
    {
        if (c == ' ') continue;                 // пропустить пробел
        if (!seen[(unsigned char)c]) {
            fputc(c, fout);                      // записать первый вхождение
            seen[(unsigned char)c] = true;
        }
    }

    fclose(fin);
    fclose(fout);
    return 0;
}