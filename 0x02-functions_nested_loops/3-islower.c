#include "main.h"
/**
 * _islower - checks if a char is lowercase.
 *
 * 'c' represents the character to be checked for lowercase
 *
 * Return 1 if 'c' is lowercase, otherwise return 0
 */
int _islower(int c)
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
