#include <stdio.h>
#include "main.h"

/**
 *print_remaining_days - try a case that is a leap year
 *@month: month in number format
 *@day: day of a month
 *@year: year
 *Return: void
 */

void print_leap_year(int day, int month, int year)
{
if (((year % 4 == 0) && (year % 100 != 0 && (day > 28))) || (year % 400 == 0))

printf("Invalid date: %02d%\n", year);

else
{
printf("%d is not a leap year", year);
}
return 0;
}