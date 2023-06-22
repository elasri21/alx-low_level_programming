#include "main.h"
/**
 * more_numbers -  prints numbers
 *
 * Return: nothing
 */
void more_numbers(void)
{
int i, j, s;
for (i = 0; i < 10; i++)
{
for (j = '0', s = '0'; j <= '>';s++, j++)
{
if (j > '9')
{
_putchar('1');
s = j - 10;
}
_putchar(s);
}
_putchar('\n');
}
}
