int count_between(int from, int to, int size, int a[])
{
    if (size <= 0) return 0;

    /* ensure proper order of bounds */
    int lo = from < to ? from : to;
    int hi = from > to ? from : to;

    int cnt = 0;
    for (int i = 0; i < size; ++i)
        if (a[i] >= lo && a[i] <= hi)
            ++cnt;

    return cnt;
}