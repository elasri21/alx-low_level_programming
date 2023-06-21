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
int i = 0;
char strNum[20];
char str[20];
sprintf(strNum, "%d", n);
while (strNum[i])
{
i++;
}
_putchar(strNum[i- 1]);
return strNum[i - 1];
}
