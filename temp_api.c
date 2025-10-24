// temp_api.c

#include "temp_api.h"
#include <string.h>
#include <limits.h>

void print_month_avg_temperature(TemperatureRecord *records, int count, const char *month)
{
    int sum = 0;
    int num_records = 0;
    for (int i = 0; i < count; i++)
    {
        if (strcmp(records[i].month, month) == 0)
        {
            sum += records[i].temperature;
            num_records++;
        }
    }
    if (num_records > 0)
    {
        printf("Среднемесячная температура за %s: %.2f\n", month, (double)sum / num_records);
    }
    else
    {
        printf("Нет данных для месяца %s\n", month);
    }
}

void print_month_min_temperature(TemperatureRecord *records, int count, const char *month)
{
    int min_temp = INT_MAX;
    int found = 0;
    for (int i = 0; i < count; i++)
    {
        if (strcmp(records[i].month, month) == 0)
        {
            if (records[i].temperature < min_temp)
            {
                min_temp = records[i].temperature;
            }
            found = 1;
        }
    }
    if (found)
    {
        printf("Минимальная температура в %s: %d\n", month, min_temp);
    }
    else
    {
        printf("Нет данных для месяца %s\n", month);
    }
}

void print_month_max_temperature(TemperatureRecord *records, int count, const char *month)
{
    int max_temp = INT_MIN;
    int found = 0;
    for (int i = 0; i < count; i++)
    {
        if (strcmp(records[i].month, month) == 0)
        {
            if (records[i].temperature > max_temp)
            {
                max_temp = records[i].temperature;
            }
            found = 1;
        }
    }
    if (found)
    {
        printf("Максимальная температура в %s: %d\n", month, max_temp);
    }
    else
    {
        printf("Нет данных для месяца %s\n", month);
    }
}

void print_year_avg_temperature(TemperatureRecord *records, int count)
{
    int sum = 0;
    for (int i = 0; i < count; i++)
    {
        sum += records[i].temperature;
    }
    if (count > 0)
    {
        printf("Среднегодовая температура: %.2f\n", (double)sum / count);
    }
    else
    {
        printf("Нет данных за год\n");
    }
}

void print_year_min_temperature(TemperatureRecord *records, int count)
{
    if (count == 0)
    {
        printf("Нет данных за год\n");
        return;
    }
    int min_temp = records[0].temperature;
    for (int i = 1; i < count; i++)
    {
        if (records[i].temperature < min_temp)
        {
            min_temp = records[i].temperature;
        }
    }
    printf("Минимальная температура за год: %d\n", min_temp);
}

void print_year_max_temperature(TemperatureRecord *records, int count)
{
    if (count == 0)
    {
        printf("Нет данных за год\n");
        return;
    }
    int max_temp = records[0].temperature;
    for (int i = 1; i < count; i++)
    {
        if (records[i].temperature > max_temp)
        {
            max_temp = records[i].temperature;
        }
    }
    printf("Максимальная температура за год: %d\n", max_temp);
}