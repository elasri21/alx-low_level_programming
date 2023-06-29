#include "main.h"
#include <string.h>
/**
 * _strncpy - copies a string
 * @dest: destination string
 * @src: source string
 * @n: Number of string
 * Return: String
 */
char *_strncpy(char *dest, char *src, int n)
{
strncpy(dest, src, n);
return (dest);
}
