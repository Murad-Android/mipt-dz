#include <stdio.h>

char to_upper(char c) {
    if (c >= 'a' && c <= 'z')
        return c - ('a' - 'A');
    return c;
}

int main(void) {
    int ch;
    while ((ch = getchar()) != EOF && ch != '.') {
        putchar(to_upper((char)ch));
    }
    return 0;
}