#include <stdio.h>

int main()
{
    long long n;
    // printf("Введите простое число: ");
    if (scanf("%lld", &n) != 1)
    {
        // printf("Некорректный ввод\n");
        return 1;
    }

    if (n < 0)
    {
        printf("NO\n");
        return 0;
    }

    if (n >= 0 && n <= 9)
    {
        printf("YES\n");
        return 0;
    }

    long long prev_digit = 10; // больше любой цифры
    long long temp = n;
    int is_ascending = 1;

    while (temp > 0)
    {
        long long digit = temp % 10;
        if (digit >= prev_digit)
        {
            is_ascending = 0;
            break;
        }
        prev_digit = digit;
        temp /= 10;
    }

    if (is_ascending)
        printf("YES\n");
    else
        printf("NO\n");

    return 0;
}