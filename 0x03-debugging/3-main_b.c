#include "main.h"

/**
* main - takes a date and prints how many days are left in the year, taking
* leap years into account
* Return: 0
*/

int main(void)
{
int month, day, year;

month = 02;
day = 29;
year = 2000;

printf("Date: %02d/%02d/%04d\n", month, day, year);

day = convert_day(month, day + 1);

print_remaining_days(month, day + 1, year);

return (0);
}
