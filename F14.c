int sum_between_ab(int from, int to, int size, int a[])
{
    if (size <= 0) return 0;

    /* ensure proper order of bounds */
    int lo = (from < to) ? from : to;
    int hi = (from > to) ? from : to;

    long long sum = 0;               // использовать более широкий тип для избежания переполнения
    for (int i = 0; i < size; ++i)
        if (a[i] >= lo && a[i] <= hi)
            sum += a[i];

    return (int)sum;
}