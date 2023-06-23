#include "main.h"
/**
 * print_triangle - prints a triangle.
 *
 * @size: size of the triangle
 * Return: nothing
 */
void print_triangle(int size)
{
int i, j;
if (size > 0)
{
for (i = size; i >= 1; i--)
{
for (j = 1; j <= size; j++)
{
if (j > i)
_putchar('#');
else if (j <= i)
_putchar(' ');
}
if (i != 1)
_putchar('\n');
}
}
else
_putchar('\n');
}
