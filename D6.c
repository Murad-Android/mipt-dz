#include <stdio.h>

void reverse_string(void) {
    int ch = getchar();
    if (ch == EOF || ch == '.') return;
    reverse_string();
    putchar(ch);
}

int main(void) {
    reverse_string();
    return 0;
}