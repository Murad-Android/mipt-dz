#include <stdio.h>
#include <limits.h>

#define N 30

/* Функция ищет пару индексов с минимальной суммой элементов */
void find_min_sum_pair(const int a[], int *idx1, int *idx2)
{
    long long min_sum = LLONG_MAX;   // используем 64‑бит для избежания переполнения
    *idx1 = -1;
    *idx2 = -1;

    for (int i = 0; i < N; ++i) {
        for (int j = i + 1; j < N; ++j) {
            long long cur_sum = (long long)a[i] + a[j];
            if (cur_sum < min_sum) {
                min_sum = cur_sum;
                *idx1 = i;
                *idx2 = j;
            }
        }
    }
}

/* Основная программа: чтение массива, вызов функции и вывод результата */
int main(void)
{
    int arr[N];

    for (int i = 0; i < N; ++i) {
        if (scanf("%d", &arr[i]) != 1) return 0;
    }

    int first, second;
    find_min_sum_pair(arr, &first, &second);

    /* выводим индексы в порядке возрастания (они уже i<j) */
    printf("%d %d\n", first, second);
    return 0;
}