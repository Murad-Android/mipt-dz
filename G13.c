#include <stdio.h>
#include <string.h>

int main(void)
{
    FILE *fin  = fopen("input.txt", "r");
    FILE *fout = fopen("output.txt", "w");
    if (!fin || !fout) return 1;

    char path[2005];
    if (!fgets(path, sizeof path, fin)) {
        fclose(fin);
        fclose(fout);
        return 0;
    }
    fclose(fin);

    /* убрать перевод строки */
    size_t len = strlen(path);
    while (len && (path[len - 1] == '\n' || path[len - 1] == '\r'))
        path[--len] = '\0';

    /* позиция последнего '/' */
    char *last_slash = strrchr(path, '/');
    char *name_start = last_slash ? last_slash + 1 : path;

    /* позиция последней '.' в имени файла */
    char *last_dot = strrchr(name_start, '.');

    if (last_dot) {
        /* заменяем всё после точки на ".html" */
        strcpy(last_dot, ".html");
    } else {
        /* нет расширения – просто добавляем его */
        strcat(path, ".html");
    }

    fputs(path, fout);
    fclose(fout);
    return 0;
}