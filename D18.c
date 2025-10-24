#include <stdio.h>

void print_digits(int n) {
    if (n < 10) {
        printf("%d", n);
    } else {
        print_digits(n / 10);
        printf(" %d", n % 10);
    }
}

int main() {
    int number;
    scanf("%d", &number);

    print_digits(number);
    printf("\n");

    return 0;
}