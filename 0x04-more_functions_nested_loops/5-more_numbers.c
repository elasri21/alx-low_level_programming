#include "main.h"
/**
 * more_numbers -  prints numbers
 *
 * Return: nothing
 */
void more_numbers(void)
{
int i, j;
for (i = 0; i < 10; i++)
{
for (j = '0'; j <= '>'; j++)
{
if (j > '9')
{
_putchar('1');
_putchar((j - 10));
}
else
_putchar(j);
}
_putchar('\n');
}
}
