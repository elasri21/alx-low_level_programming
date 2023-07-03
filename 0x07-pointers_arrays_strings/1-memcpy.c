#include "main.h"
#include <string.h>

/**
 * _memcpy - copies memory area
 * @dest: destination memory
 * @src: source memory
 * @n: size
 * Return: string
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
memcpy(dest, src, n);
return (dest);
}
