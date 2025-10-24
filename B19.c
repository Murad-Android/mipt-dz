#include <stdio.h>
#include <string.h>

int main(void) {
    char s[1024];
    if (scanf("%1023s", s) != 1) return 0;

    int sum = 0;
    for (size_t i = 0; i < strlen(s); ++i)
        sum += s[i] - '0';

    printf("%s\n", (sum == 10) ? "YES" : "NO");
    return 0;
}