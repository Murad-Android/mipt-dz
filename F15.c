int count_bigger_abs(int n, int a[])
{
    if (n <= 0) return 0;

    /* находим максимальный элемент по обычному порядку */
    int max_val = a[0];
    for (int i = 1; i < n; ++i)
        if (a[i] > max_val)
            max_val = a[i];

    int max_abs = max_val >= 0 ? max_val : -max_val;

    int cnt = 0;
    for (int i = 0; i < n; ++i) {
        int cur_abs = a[i] >= 0 ? a[i] : -a[i];
        if (cur_abs > max_abs)
            ++cnt;
    }
    return cnt;
}