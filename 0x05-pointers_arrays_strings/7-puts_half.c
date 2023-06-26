#include "main.h"
#include <string.h>
/**
 * puts_half - print half a string
 * @str: string
 * Return: Nothing
 */
void puts_half(char *str)
{
int len = strlen(str), newLen, i;
if (len % 2 == 0)
newLen = len / 2;
else
newLen = (len - 1) / 2;
for (i = newLen; i < len; i++)
{
_putchar(str[i]);
}
_putchar('\n');
}
