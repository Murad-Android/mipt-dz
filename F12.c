void change_max_min(int size, int a[])
{
    if (size <= 0) return;

    int min_idx = 0;
    int max_idx = 0;

    for (int i = 1; i < size; ++i)
    {
        if (a[i] < a[min_idx]) min_idx = i;
        if (a[i] > a[max_idx]) max_idx = i;
    }

    int tmp = a[min_idx];
    a[min_idx] = a[max_idx];
    a[max_idx] = tmp;
}