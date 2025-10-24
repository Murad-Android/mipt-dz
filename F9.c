void swap_negmax_last(int size, int a[])
{
    if (size <= 0) return;               // пустой массив

    int maxNegIdx = -1;
    for (int i = 0; i < size; ++i)
    {
        if (a[i] < 0)
        {
            if (maxNegIdx == -1 || a[i] > a[maxNegIdx])
                maxNegIdx = i;
        }
    }

    // если отрицательных элементов нет – ничего не меняем
    if (maxNegIdx == -1) return;

    // меняем найденный элемент с последним элементом массива
    int temp = a[maxNegIdx];
    a[maxNegIdx] = a[size - 1];
    a[size - 1] = temp;
}