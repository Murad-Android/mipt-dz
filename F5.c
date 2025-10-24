int find_max_array(int size, int a[])
{
    if (size <= 0) return 0;   // для пустого массива возвращаем 0

    int max_val = a[0];
    for (int i = 1; i < size; ++i)
        if (a[i] > max_val)
            max_val = a[i];

    return max_val;
}