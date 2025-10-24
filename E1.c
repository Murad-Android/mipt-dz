#include <stdio.h>

int main(void) {
    int arr[5];
    long long sum = 0;

    for (int i = 0; i < 5; ++i) {
        if (scanf("%d", &arr[i]) != 1) return 0;
        sum += arr[i];
    }

    double avg = sum / 5.0;
    printf("%.3f\n", avg);
    return 0;
}