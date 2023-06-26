#include "main.h"
#include <string.h>
/**
 * _strcpy -  copies the string pointed to by src
 * @dest: destination str
 * @src: source string
 * Return: dest string
 */
char *_strcpy(char *dest, char *src)
{
int i, len = strlen(src);
for (i = 0; i <= len; i++)
{
dest[i] = src[i];
}
return (dest);
}
