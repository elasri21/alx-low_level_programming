#include "main.h"
#include <string.h>

/**
 * _puts - print a string
 * @s: string
 * Return: void
*/
void _puts(char *s)
{
int i, len = strlen(s);
for (i =0; i < len; i++)
{
_putchar(s[i]);
}
_putchar('\n');
}
