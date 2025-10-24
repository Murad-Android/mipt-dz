void sort_array(int size, int a[])
{
    for (int i = 0; i < size - 1; ++i) {
        /* ищем минимум в оставшейся части массива */
        int min_idx = i;
        for (int j = i + 1; j < size; ++j) {
            if (a[j] < a[min_idx])
                min_idx = j;
        }
        /* меняем местами текущий элемент и найденный минимум */
        if (min_idx != i) {
            int tmp = a[i];
            a[i] = a[min_idx];
            a[min_idx] = tmp;
        }
    }
}