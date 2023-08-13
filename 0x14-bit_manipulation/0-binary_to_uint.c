#include "main.h"
#include <stdio.h>
#include <string.h>
#include <math.h>
/**
 * binary_to_uint - converts a binary number to int
 * @b: pointer to a character
 * Return: unsigned integer
 */

unsigned int binary_to_uint(const char *b)
{
unsigned int d = 0;
if (!b)
return (0);
while (*b != '\0')
{
if (*b != '1' && *b != '0')
return (0);
d = (d << 1) | (*b - '0');
b = b + 1;
}
return (d);
}
