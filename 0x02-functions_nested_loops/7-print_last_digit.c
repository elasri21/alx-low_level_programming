#include "main.h"
#include <string.h>
#include <stdio.h>
/**
 * print_last_digit - prints the last digit of a number.
 * @n: The number to be processed
 *
 * Return: the value of the last digit
 */
int print_last_digit(int n)
{
int i;
char strNum[20];
sprintf(strNum, "%d", n);
for (i = 0; i < strlen(strNum); i++)
if (i == strlen(strNum) - 1)
{
_putchar(strNum[i]);
break;
}
return strNum[i];
}
