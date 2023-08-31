#include "main.h"
/**
 * print_binary - prints the binary representation of a number
 * @n: number to convert
 * Return: nothing
 */
void print_binary(unsigned long int n)
{
unsigned long int curr;
int c = 0, j;
for (j = 63; j >= 0; j--)
{
curr = n >> j;
if (curr & 1)
{
_putchar('1');
c++;
}
else if (c)
_putchar('0');
}
if (!c)
_putchar('0');
}
