#include "main.h"
/**
 * binary_to_uint - convert from binary to integer
 * @b: binary number to convert
 * Return: integer
 */
unsigned int binary_to_uint(const char *b)
{
unsigned int d = 0;
int j;
if (!b)
return (0);
for (j = 0; b[j]; j++)
{
if (b[j] > '1' || b[j] < '0')
return (0);
d = 2 * d + (b[j] - '0');
}
return (d);
}
