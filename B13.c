#include <stdio.h>
#include <string.h>


int main(void) {
    char s[1024];                     // буфер для ввода (достаточно большой)
    if (scanf("%1023s", s) != 1) {   // читаем число как строку
        return 0;
    }

    int even_cnt = 0;
    int odd_cnt  = 0;

    for (size_t i = 0; i < strlen(s); ++i) {
        char c = s[i];
        if (c >= '0' && c <= '9') {          // гарантируем, что символ – цифра
            int d = c - '0';
            if (d % 2 == 0)
                ++even_cnt;
            else
                ++odd_cnt;
        }
    }

    printf("%d %d\n", even_cnt, odd_cnt);
    return 0;
}