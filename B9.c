#include <stdio.h>
#include <string.h>

int main(void) {
    char s[10005];
    scanf("%10004s", s);
    int start = (s[0] == '-' || s[0] == '+') ? 1 : 0;
    for (int i = start; s[i]; i++) {
        if ((s[i] - '0') % 2 != 0) {
            printf("NO\n");
            return 0;
        }
    }
    printf("YES\n");
    return 0;
}
