// temp_api.h

#ifndef TEMP_API_H
#define TEMP_API_H

#include <stdio.h>

typedef struct
{
    int year;        // 4 цифры
    char month[3];   // 2 символа + '\0'
    char day[3];     // 2 цифры + '\0'
    char hour[3];    // 2 цифры + '\0'
    char minute[3];  // 2 цифры + '\0'
    int temperature; // целое число от -99 до 99
} TemperatureRecord;

// Прототипы функций для вывода статистики по месяцу
void print_month_avg_temperature(TemperatureRecord *records, int count, const char *month);
void print_month_min_temperature(TemperatureRecord *records, int count, const char *month);
void print_month_max_temperature(TemperatureRecord *records, int count, const char *month);

// Прототипы функций для вывода статистики за год
void print_year_avg_temperature(TemperatureRecord *records, int count);
void print_year_min_temperature(TemperatureRecord *records, int count);
void print_year_max_temperature(TemperatureRecord *records, int count);

#endif // TEMP_API_H