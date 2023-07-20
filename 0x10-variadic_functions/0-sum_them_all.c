#include "variadic_functions.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
/**
 * sum_them_all - sum all args
 * @n: number of args
 * Return: Integer
 */
int sum_them_all(const unsigned int n, ...)
{
unsigned int i;
int sum;
va_list args;
va_start(args, n);
sum = 0;
if (n == 0)
return (0);
for (i = 0; i < n; i++)
{
sum += va_arg(args, int);
}
va_end(args);
return (sum);
}
