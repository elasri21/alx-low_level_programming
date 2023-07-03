#include "main.h"
#include <string.h>

/**
 * _strpbrk -  searches a string for any of a set of bytes.
 * @s: string
 * @accept: string
 * Return: string
 */

char *_strpbrk(char *s, char *accept)
{
s = strpbrk(s, accept);
return (s);
}
