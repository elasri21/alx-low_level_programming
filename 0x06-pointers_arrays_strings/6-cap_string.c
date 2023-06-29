#include "main.h"
#include <string.h>
/**
 * cap_string - capitalizes all words of a string
 * @s: string to modify
 * Return: string
 */
char *cap_string(char *s)
{
int i, len = strlen(s);
for (i = 0; i < len; i++)
{
if(i + 1 != len && (s[i] == ' ' || s[i] == '\t' || s[i] == '\n'))
{
if (s[i + 1] >= 'a' && s[i + 1] <= 'z')
{
s[i + 1] = s[i + 1] - 32;
}
}
}
return (s);
}
