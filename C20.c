#include <stdio.h>

int main(void) {
    int ch;
    int balance = 0;
    int ok = 1;

    while ((ch = getchar()) != EOF && ch != '.') {
        if (ch == '(') {
            ++balance;
        } else if (ch == ')') {
            --balance;
            if (balance < 0) { ok = 0; break; }
        }
    }

    if (balance != 0) ok = 0;

    printf("%s\n", ok ? "YES" : "NO");
    return 0;
}