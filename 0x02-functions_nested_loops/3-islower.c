#include "main.h"
/**
 * _islower - checks if a char is lowercase.
 *
 * Return: 1 if so and 0 if not.
 */
int _islower(int c)
/**
 *  'c' represents the character to be checked for lowercase
 *  Return 1 if 'c' is lowercase, otherwise return 0
 */
{
if (c >= 'a' && c <= 'z')
{
return (1);
}
else
{
return (0);
}
}
