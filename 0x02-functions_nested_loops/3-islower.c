#include "main.h"
/**
 * _islower - checks if a char is lowercase.
 *
 * Return: 1 if so and 0 if not.
 */
int _islower(int c) /* c: c is ASCII code of a character */
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
