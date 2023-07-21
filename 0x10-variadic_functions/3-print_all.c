#include "variadic_functions.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
/**
 * print_all - Prints anything
 * @format: format
 * Return: Nothing
 */
void print_all(const char * const format, ...)
{
int i = 0;
va_list args;
va_start(args, format);
while (format != NULL && format[i])
{
switch (format[i])
{
case 'i':
{
printf("%d", va_arg(args, int));
break;
}
case 'c':
{
printf("%c", va_arg(args, int));
break;
}
case 'f':
{
printf("%f", va_arg(args, double));
break;
}
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
va_end(args);
printf("\n");
}
