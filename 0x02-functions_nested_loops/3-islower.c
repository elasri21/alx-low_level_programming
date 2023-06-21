#include "main.h"
/**
 * _islower - checks if a char is lowercase.
 *
 * Check if the character is a lowercase letter.
   Parameters:
 * c: the character to be checked (must be a lowercase letter)
 *
 * Return: 1 if  true, otherwise return 0
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
