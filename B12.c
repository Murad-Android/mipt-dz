#include <stdio.h>
#include <string.h>

int main(void) {
    char s[1024];                    
    if (scanf("%1023s", s) != 1) {
        return 0;
    }

    int min_digit = 9;  
    int max_digit = 0; 

    for (size_t i = 0; i < strlen(s); ++i) {
        char c = s[i];
        if (c >= '0' && c <= '9') { 
            int d = c - '0';
            if (d < min_digit) min_digit = d;
            if (d > max_digit) max_digit = d;
        }
    }

    printf("%d %d\n", min_digit, max_digit);
    return 0;
}