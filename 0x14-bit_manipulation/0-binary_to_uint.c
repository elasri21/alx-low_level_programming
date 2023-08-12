#include "main.h"
#include <stdio.h>
#include <string.h>
#include <math.h>
/**
 * power - calculate the power
 * @p: expo
 * Return: integer
 */
int power(int p)
{
int i, res = 1;
for (i = 0; i < p; i++)
{
res *= 2;
}
return (res);
}
/**
 * binary_to_uint - converts a binary number to int
 * @b: pointer to a character
 * Return: unsigned integer
 */

unsigned int binary_to_uint(const char *b)
{
unsigned int d = 0;
int i, j = 0, len = strlen(b);
if (b == NULL)
return (0);
for (i = len - 1; i >= 0; i--)
{
if (b[i] == '1')
{
d += power(j);
j++;
}
else if (b[i] == '0')
j++;
else
return (0);
}
return (d);
}
