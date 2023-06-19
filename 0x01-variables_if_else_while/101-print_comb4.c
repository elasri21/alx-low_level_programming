#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/**
 * main - Entry point.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int i, j, s;
for (i = '0'; i <= '9'; i++)
{
for (j = '0'; j <= '9'; j++)
{
for (s = '0'; s <= '9'; s++)
{
if (i < j && j < s)
{
putchar(i);
putchar(j);
putchar(s);
if (i != '8')
{
putchar(',');
putchar(' ');
}
}
}
}
}
putchar('\n');
return (0);
}
