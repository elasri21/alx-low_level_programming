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
char str[20];
for (i = 0; i < strlen(strNum); i++)
{
str[i] = strNum[i];
}
_putchar(str[strlen(str) - 1]);
return str[strlen(str) - 1];
}
