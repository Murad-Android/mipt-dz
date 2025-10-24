#include <stdio.h>

int main(void)
{
    FILE *fin  = fopen("input.txt", "r");
    FILE *fout = fopen("output.txt", "w");
    if (!fin || !fout) return 1;

    int N;
    if (fscanf(fin, "%d", &N) != 1) return 1;
    fclose(fin);

    const char ev[4] = {'2','4','6','8'};
    char result[27];               // N ≤ 26, plus '\0'
    for (int i = 0; i < N; ++i) {
        if (i % 2 == 0) {                     // odd position (1‑based)
            result[i] = 'A' + i / 2;
        } else {                               // even position
            result[i] = ev[(i / 2) % 4];
        }
    }
    result[N] = '\0';

    fputs(result, fout);
    fclose(fout);
    return 0;
}
