#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * print_binary - prints a binaru number
 * @n: number to convert
 * Return: Nothing
 */

void print_binary(unsigned long int n)
{
unsigned long int tmp = 1UL << (sizeof(unsigned long int) * 8 - 1);
int zeros = 1;
if (n == 0)
{
_putchar('0');
return;
}
while (tmp > 0)
{
if (n & tmp)
{
zeros = 0;
_putchar('1');
}
else if (!zeros)
{
_putchar('0');
}
tmp >>= 1;
}
}
