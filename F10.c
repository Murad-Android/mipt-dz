#include <stdio.h>
#include <string.h>

int main(void)
{
    char s[1105];
    if (scanf("%s", s) != 1) return 0;

    size_t len = strlen(s);
    /* строка гарантированно заканчивается точкой */
    for (size_t i = 0; i + 1 < len; ) {
        char cur = s[i];
        size_t cnt = 0;
        while (i + 1 < len && s[i] == cur) { ++cnt; ++i; }
        printf("%c%zu", cur, cnt);
    }
    return 0;
}