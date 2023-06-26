#include "main.h"
#include <string.h>
/**
 * puts2 - print a string
 * @str: string
 * Return: Nothing
 */
void puts2(char *str)
{
int len = strlen(str), i;
for (i = 0; i < len; i++)
{
if (i % 2 == 0)
{
_putchar(str[i]);
}
}
_putchar('\n');
}
