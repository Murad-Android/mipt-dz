#include <stdio.h>
#include <ctype.h>

int main(void)
{
    FILE *fin  = fopen("input.txt", "r");
    FILE *fout = fopen("output.txt", "w");
    if (!fin || !fout) return 1;

    int lower = 0, upper = 0;
    int c;

    while ((c = fgetc(fin)) != EOF) {
        if (islower(c) && isalpha(c))
            ++lower;
        else if (isupper(c) && isalpha(c))
            ++upper;
    }

    fprintf(fout, "%d %d", lower, upper);

    fclose(fin);
    fclose(fout);
    return 0;
}