#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int cmp_int(const void *a, const void *b)
{
    int x = *(const int *)a;
    int y = *(const int *)b;
    return (x > y) - (x < y);
}

int main(void)
{
    FILE *fin  = fopen("input.txt", "r");
    FILE *fout = fopen("output.txt", "w");
    if (!fin || !fout) return 1;

    char buf[1005];
    size_t len = fread(buf, 1, sizeof(buf) - 1, fin);
    buf[len] = '\0';
    fclose(fin);

    int numbers[1000];
    int cnt = 0;
    for (size_t i = 0; i < len;) {
        if (buf[i] == '-' && isdigit((unsigned char)buf[i + 1])) {   // negative number
            int sign = -1;
            ++i;
            int val = 0;
            while (isdigit((unsigned char)buf[i])) {
                val = val * 10 + (buf[i] - '0');
                ++i;
            }
            numbers[cnt++] = sign * val;
        } else if (isdigit((unsigned char)buf[i])) {                 // positive number
            int val = 0;
            while (isdigit((unsigned char)buf[i])) {
                val = val * 10 + (buf[i] - '0');
                ++i;
            }
            numbers[cnt++] = val;
        } else {
            ++i;
        }
    }

    qsort(numbers, cnt, sizeof(int), cmp_int);

    for (int i = 0; i < cnt; ++i) {
        if (i) fputc(' ', fout);
        fprintf(fout, "%d", numbers[i]);
    }

    fclose(fout);
    return 0;
}