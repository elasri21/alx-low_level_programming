#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * print_numbers - Print numbers
 * @separator: THe separator
 * @n: Number of args
 * Return: Nothing
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
unsigned int i;
va_list args;
va_start(args, n);
for (i = 0; i < n; i++)
{
printf("%d", va_arg(args, int));
if (separator != NULL && i < n - 1)
printf("%s", separator);
}
printf("\n");
}
