#include <stdio.h>
#include <string.h>

int is_palindrom(const char *s)
{
    size_t len = strlen(s);
    for (size_t i = 0; i < len / 2; ++i)
        if (s[i] != s[len - 1 - i])
            return 0;
    return 1;
}

int main(void)
{
    FILE *fin  = fopen("input.txt", "r");
    FILE *fout = fopen("output.txt", "w");
    if (!fin || !fout) return 1;

    char str[1005];
    if (fgets(str, sizeof str, fin) == NULL) {
        fclose(fin);
        fclose(fout);
        return 0;
    }
    fclose(fin);

    /* удалить перевод строки, если он есть */
    size_t len = strlen(str);
    while (len && (str[len-1] == '\n' || str[len-1] == '\r')) {
        str[--len] = '\0';
    }

    if (is_palindrom(str))
        fputs("YES", fout);
    else
        fputs("NO",  fout);

    fclose(fout);
    return 0;
}