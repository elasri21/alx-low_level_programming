#include "main.h"
/**
 *_memset -  fills memory with a constant byte
 * @s: string to fill
 * @b: constant byte
 * @n: the number of bytes
 * Return: string
 */
char *_memset(char *s, char b, unsigned int n)
{
unsigned int i;
for (i = 1; i <= n; i++)
{
_putchar(b);
if (i != n)
{
_putchar(' ');
}
}
return (s);
}
