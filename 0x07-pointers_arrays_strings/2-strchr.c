#include "main.h"
#include <string.h>

/**
 * _strchr - locates a character in a string
 * @s: string source
 * @c: character to look for
 * Return: string
 */
char *_strchr(char *s, char c)
{
s = strchr(s, c);
if (s != NULL)
return (s);
else
return NULL;
}
