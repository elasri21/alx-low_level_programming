#include "variadic_functions.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
/**
 * helper - helper func
 * @format: string
 * @args: arguments list
 * Return: Nothing
 */
void helper(const char *const format, va_list args)
{
int i = 0;
while (format != NULL && format[i])
{
switch (format[i])
{
case 'i':
printf("%d", va_arg(args, int));
break;
case 'c':
printf("%c", va_arg(args, int));
break;
case 'f':
printf("%f", va_arg(args, double));
break;
case 's':
{
char *x = va_arg(args, char *);
if (x == NULL)
{
printf("(nil)");
break;
}
printf("%s", x);
break;
}
default:
i++;
continue;
}
i++;
if (format[i])
printf(", ");
}
}
/**
 * print_all - Prints anything
 * @format: format
 * Return: Nothing
 */
void print_all(const char *const format, ...)
{
va_list args;
va_start(args, format);
helper(format, args);
va_end(args);
printf("\n");
}
