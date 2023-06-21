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
char strNum[20];
sprintf(strNum, "%d", n);
_putchar(strNum[strlen(strNum) - 1]);
return strNum[strlen(strNum) - 1];
}
