#include "main.h"
#include <string.h>
/**
 * _strncat - concatenates n strings
 * @dest: destination string
 * @src: source string
 * @n: Number of string
 * Return: String
 */
char *_strncat(char *dest, char *src, int n)
{
strncat(dest, src, n);
return (dest);
}
