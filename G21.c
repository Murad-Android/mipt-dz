#include <stdio.h>
#include <math.h>

int main(void)
{
    FILE *fin  = fopen("input.txt", "r");
    FILE *fout = fopen("output.txt", "w");
    if (!fin || !fout) return 1;

    long long stars = 0;
    int ch;
    while ((ch = fgetc(fin)) != EOF)
        if (ch == '*') ++stars;
    fclose(fin);

    /* find h such that h*(h+1)/2 == stars */
    long long h = -1;
    if (stars > 0) {
        double d = sqrt(1.0 + 8.0 * (double)stars);
        long long cand = (long long)((-1.0 + d) / 2.0);
        if (cand * (cand + 1) / 2 == stars)
            h = cand;
    }

    if (h == -1) {
        fputs("NO", fout);
        fclose(fout);
        return 0;
    }

    for (long long i = 1; i <= h; ++i) {
        /* leading spaces */
        for (long long s = 0; s < h - i; ++s)
            fputc(' ', fout);

        /* stars with single space between them */
        for (long long j = 1; j <= i; ++j) {
            fputc('*', fout);
            if (j != i) fputc(' ', fout);
        }
        if (i != h) fputc('\n', fout);
    }

    fclose(fout);
    return 0;
}