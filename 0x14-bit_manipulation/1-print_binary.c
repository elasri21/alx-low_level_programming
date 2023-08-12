#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * print_binary - prints a binaru number
 * @n: number to convert
 * Return: Nothing
 */

void print_binary(unsigned long int n)
{
char s[100];
int i = 0, len;
while (1)
{
if (n % 2 == 1)
s[i] = '1';
else
s[i] = '0';
n = n / 2;
i++;
if (n == 0)
break;
}
s[i] = '\0';
len = strlen(s);
for (i = len - 1; i >= 0; i--)
{
printf("%c", s[i]);
if (i == 0)
printf("\n");
}
}
