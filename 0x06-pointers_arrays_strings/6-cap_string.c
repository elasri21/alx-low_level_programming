#include "main.h"
#include <string.h>
/**
 * cap_string - capitalizes all words of a string
 * @s: string to modify
 * Return: string
 */
char *cap_string(char *s)
{
int i, j, len = strlen(s);
char spec[] = {'\n', '\t', '.', ',', '?', '!', ';', '"', '(', ')', ' ', '{', '}'};
int l2 = strlen(spec);
for (i = 0; i < len; i++)
{
for (j = 0; j < l2;j++)
{
if(i + 1 != len && (s[i] == spec[j]))
{
if (s[i + 1] >= 'a' && s[i + 1] <= 'z')
{
s[i + 1] = s[i + 1] - 32;
}
}
}
}
return (s);
}
