#include "main.h"
/**
 * is_prime_number - check if an integer is prime
 * @n: integer to check
 * Return: integer.
 */
int j = 2;
int is_prime_number(int n)
{
if (n < 2 || n % j == 0)
return (0);
if (j * j > n)
return (1);
if (n % j != 0)
j++;
return (is_prime_number(n));
}
