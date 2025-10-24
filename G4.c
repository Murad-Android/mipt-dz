#include <stdio.h>

int main(void)
{
    FILE *fin  = fopen("input.txt", "r");
    FILE *fout = fopen("output.txt", "w");
    if (!fin || !fout) return 1;

    char w1[101], w2[101];
    if (fscanf(fin, "%100s %100s", w1, w2) != 2) {
        fclose(fin);
        fclose(fout);
        return 1;
    }
    fclose(fin);

    int cnt1[26] = {0}, cnt2[26] = {0};

    for (int i = 0; w1[i]; ++i)
        if (w1[i] >= 'a' && w1[i] <= 'z')
            ++cnt1[w1[i] - 'a'];

    for (int i = 0; w2[i]; ++i)
        if (w2[i] >= 'a' && w2[i] <= 'z')
            ++cnt2[w2[i] - 'a'];

    int first = 1;
    for (int i = 0; i < 26; ++i) {
        if (cnt1[i] == 1 && cnt2[i] == 1) {
            if (!first) fputc(' ', fout);
            fputc('a' + i, fout);
            first = 0;
        }
    }

    fclose(fout);
    return 0;
}