#include "main.h"
/**
 * void _puts - prints a string
 * @s: string
 * Return: Nothing
 */
void _puts(char *str)
{
int i = 0;
while (str[i] != '\0')
{
_putchar(str[i]);
i++;
}
_putchar('\n');
}
