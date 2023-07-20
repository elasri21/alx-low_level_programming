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
while (*(format + i) != '\0')
{
if (*format == 'i')
{
int arg = va_arg(args, int);
printf("%d ", arg);
}
else if (*format == 'f')
{
double arg = va_arg(args, double);
printf("%f ", arg);
}
else if (*format == 'c')
{
int arg = va_arg(args, int);
printf("%c ", arg);
}
else if (*format == 's')
{
char *arg = va_arg(args, char *);
printf("%s ", arg);
}
i++;
}
va_end(args);
printf("\n");
}
