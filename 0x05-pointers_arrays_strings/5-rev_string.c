#include "main.h"
#include <string.h>
/**
 * rev_string - reverse a string
 * @s: string
 * Return: Nothing
 */
void rev_string(char *s)
{
int len = strlen(s) - 1;
int i, j;
char tmp;
for (i = 0, j = len; i < len / 2; i++, j--)
{
tmp = s[i];
s[i] = s[j];
s[j] = tmp;
}
}
