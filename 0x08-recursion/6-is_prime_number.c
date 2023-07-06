#include "main.h"
/**
 * is_prime_number - check if an integer is prime
 * @n: integer to check
 * Return: integer.
 */
int is_prime_number(int n)
{
int i = 0, j;
if (n < 2)
return (0);
for (j = 2; j < n; j++)
{
if (n % j == 0)
i++;
}
if (i > 0)
return (0);
else
return (1);
}
