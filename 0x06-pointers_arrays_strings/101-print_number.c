#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * print_number - prints an integer
 * @n: integer
 * Return: Nothing
 */
void print_number(int n)
{
int i, l;
char s[100];
sprintf(s, "%d", n);
l = strlen(s);
for (i = 0; i < l; i++)
{
_putchar(s[i]);
}
}
