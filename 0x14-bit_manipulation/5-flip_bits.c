#include "main.h"
/**
 * flip_bits -  returns the number of bits
 * @n: long integer
 * @m: long integer
 * Return: integer
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
unsigned long int curr, e = n ^ m;
int j, c = 0;
for (j = 63; j >= 0; j--)
{
curr = e >> j;
if (curr & 1)
c++;
}
return (c);
}
