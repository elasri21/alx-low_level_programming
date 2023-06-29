#include "main.h"
#include <string.h>
/**
 * string_toupper - lowercase to appercase
 * @s: string to modify
 * Return: string
*/
char *string_toupper(char *s)
{
int i, len = strlen(s);
for (i = 0; i < len; i++)
{
if (s[i] >= 'a' && s[i] <= 'z')
s[i] = s[i] - 32;
}
return (s);
}
