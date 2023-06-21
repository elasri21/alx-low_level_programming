#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - prints all natural numbers from n to 98
 *
 * @n: the started point
 * Return: Nothing
 */
void print_to_98(int n)
{
if (n < 98)
{
for (n; n <= 98; n++)
{
printf("%d", n);
}
} else 
{
for (n; n >= 98; n--)
{
printf("%d", n);
}
}
printf("\n");
}
