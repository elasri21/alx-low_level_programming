#include "main.h"
/**
 * print_diagonal -   draws a diagonal line
 * @n: number of spaces
 * Return: nothing
 */
void print_diagonal(int n)
{
int i;
if (n > 0)
{
for (i = 0; i < n; i++)
{
if (i == n - 1)
{
_putchar('\\');
}
else
{
_putchar(' ');
}
}
}
_putchar('\n');
}
