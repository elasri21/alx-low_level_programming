#include "main.h"
#include <stdio.h>
/**
 * print_times_table - prints the n times table, starting with 0.
 *
 * @n: the number to get its table
 * Return: nothing
 */
void print_times_table(int n)
{
int i, j;
if (n >= 0 && n <= 15)
{
for (i = 0; i <= n; i++)
{
for (j = 0; j <= n; j++)
{
if (j == 0)
{
printf("%d,", i * j);
}
else if (j != n && i * j < 10)
{
printf("   %d,", i * j);
}
else if (j != n && i * j >= 10 && i * j < 100)
{
printf("  %d,", i * j);
}
else if (j != n)
{
printf(" %d,", i * j);
}
else if (j == n)
{
if (i * j < 10)
{
printf("   %d", i * j);
}
else if (i * j < 100)
{
printf("  %d", i * j);
}
else
{
printf(" %d", i * j);
}
}    
}    
printf("\n");
}
}
}
