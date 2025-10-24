#include <stdio.h>

int main(void)
{
    char coord[3];               // e.g. "C3"
    if (scanf("%2s", coord) != 1) return 0;

    int file = coord[0] - 'A';   // 0 .. 7
    int rank = coord[1] - '1';   // 0 .. 7

    if ((file + rank) % 2 == 0)
        printf("BLACK\n");
    else
        printf("WHITE\n");

    return 0;
}