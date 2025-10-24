// main.c

#include "temp_api.h"
#include <stdio.h>

int main()
{
    // Пример использования
    TemperatureRecord data[] = {
        {2023, "01", "01", "12", "00", 5},
        {2023, "01", "02", "12", "00", 3},
        {2023, "02", "01", "12", "00", -2},
        {2023, "02", "02", "12", "00", 1},
        {2023, "03", "01", "12", "00", 8},
        {2023, "03", "02", "12", "00", 10}};
    int count = sizeof(data) / sizeof(data[0]);

    printf("Статистика по месяцам:\n");
    print_month_avg_temperature(data, count, "01");
    print_month_min_temperature(data, count, "01");
    print_month_max_temperature(data, count, "01");

    printf("\nСтатистика за год:\n");
    print_year_avg_temperature(data, count);
    print_year_min_temperature(data, count);
    print_year_max_temperature(data, count);

    return 0;
}