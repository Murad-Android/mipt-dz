#include <stdio.h>

int main(void)
{
    FILE *fin  = fopen("input.txt", "r");
    FILE *fout = fopen("output.txt", "w");
    if (!fin || !fout) return 1;

    char s[1005];
    if (fgets(s, sizeof s, fin) == NULL) {
        fclose(fin);
        fclose(fout);
        return 0;
    }
    fclose(fin);

    for (int i = 0; s[i] != '\0'; ++i) {
        if (s[i] == 'a')
            s[i] = 'b';
        else if (s[i] == 'b')
            s[i] = 'a';
        else if (s[i] == 'A')
            s[i] = 'B';
        else if (s[i] == 'B')
            s[i] = 'A';
    }

    fputs(s, fout);
    fclose(fout);
    return 0;
}