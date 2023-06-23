#include <stdio.h>
/**
 * main - where the code goes
 *
 * Return: Always 0.
 */
int main(void)
{
long int n = 612852475143, j, s = 0, i, tmp;
for (i = 1; i <= n; i++)
{
if (n % i == 0)
{
for (j = 2; j < i; j++)
{
if (i % j == 0)
{
s++;
}
}
if (s == 0)
tmp = i;
}
}
printf("%ld", tmp);
return (0);
}
