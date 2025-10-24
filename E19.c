#include <stdio.h>

int main(void) {
    char s[256];
    if (scanf("%255s", s) != 1) return 0;

    for (int i = 0; s[i] != '\0'; ++i) {
        if (i) putchar(' ');
        putchar(s[i]);
    }
    return 0;
}