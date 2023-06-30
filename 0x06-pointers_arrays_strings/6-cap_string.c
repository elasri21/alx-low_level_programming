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
char *p = ",;.!?\"(){} ";
int l2 = strlen(p);
for (i = 0; i < len; i++)
{
for (j = 0; j < l2; j++)
{
if (i == 0 && (s[i] <= 'a' && s[i] >= 'z'))
s[i] = s[i] - 32;
else if (i + 1 != len)
{
if (s[i] == p[j])
{
if (s[i + 1] >= 'a' && s[i + 1] <= 'z')
s[i + 1] = s[i + 1] - 32;
}
else if (s[i] == '\n' || s[i] == '\t')
{
if (s[i + 1] >= 'a' && s[i + 1] <= 'z')
s[i + 1] = s[i + 1] - 32;
}
}
}
}
return (s);
}
