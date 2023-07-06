#include "main.h"
/**
 * is_prime_number - check if an integer is prime
 * @n: integer to check
 * Return: integer.
 */
int is_prime_number1(int n, int divisor)
{
if (n <= 1)
return (0);
if (divisor == 1)
return (1);
if (n % divisor == 0)
return (0);
else
return (is_prime_number1(n, divisor - 1));
}
int is_prime_number(int n)
{
return (is_prime_number1(n, n / 2));
}
