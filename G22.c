#include <stdio.h>
#include <string.h>

int main(void)
{
    FILE *fin  = fopen("input.txt", "r");
    FILE *fout = fopen("output.txt", "w");
    if (!fin || !fout) return 1;

    char word[25];
    if (fscanf(fin, "%24s", word) != 1) {
        fclose(fin);
        fclose(fout);
        return 0;
    }
    fclose(fin);

    /* mapping: 0 – ignored, otherwise digit character */
    const char map[26] = {
        '0',               // a
        '1',               // b
        '2',               // c
        '3',               // d
        '0',               // e
        '1',               // f
        '0',               // g (will be overwritten below)
        '0',               // h
        '0',               // i
        '2',               // j
        '2',               // k
        '0',               // l (will be overwritten)
        '5',               // m
        '5',               // n
        '0',               // o
        '1',               // p
        '2',               // q
        '6',               // r
        '2',               // s
        '3',               // t
        '0',               // u
        '0',               // v (will be overwritten)
        '0',               // w
        '0',               // x (will be overwritten)
        '0',               // y
        '2'                // z
    };
    /* adjust entries that differ from the initial placeholders */
    ((char *)map)[4]  = '0';   // e -> ignore
    ((char *)map)[6]  = '2';   // g -> 2
    ((char *)map)[11] = '4';   // l -> 4
    ((char *)map)[15] = '1';   // p -> 1 (already)
    ((char *)map)[21] = '1';   // v -> 1
    ((char *)map)[23] = '2';   // x -> 2

    char result[5];            /* final Soundex code, plus '\0' */
    int pos = 0;
    result[pos++] = word[0];   /* first letter stays as is */

    char prev_digit = '0';
    for (size_t i = 1; word[i] != '\0'; ++i) {
        char ch = word[i];
        if (ch < 'a' || ch > 'z') continue;
        char digit = map[ch - 'a'];
        if (digit == '0') continue;            /* vowel or ignored letter */
        if (digit != prev_digit) {
            result[pos++] = digit;
            prev_digit = digit;
            if (pos == 4) break;               /* already have 4 chars */
        }
    }

    while (pos < 4) result[pos++] = '0';
    result[4] = '\0';

    fputs(result, fout);
    fclose(fout);
    return 0;
}