#include "main.h"
#include <string.h>

/**
 *_memset -  fills memory with a constant byte
 * @s: string to fill
 * @b: constant byte
 * @n: the number of bytes
 * Return: string
 */
char *_memset(char *s, char b, unsigned int n)
{
memset(s, b, n);
return (s);
}
