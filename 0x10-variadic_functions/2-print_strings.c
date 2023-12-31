#include "variadic_functions.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
/**
 * print_strings - print strings
 * @separator: the separator
 * @n: number of args
 * Return: Nothing
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
unsigned int i;
char *s;
va_list args;
va_start(args, n);
for (i = 0; i < n; i++)
{
s = va_arg(args, char *);
if (s != NULL)
printf("%s", s);
else
printf("(nil)");
if (separator != NULL && i < n - 1)
printf("%s", separator);
}
va_end(args);
printf("\n");
}
