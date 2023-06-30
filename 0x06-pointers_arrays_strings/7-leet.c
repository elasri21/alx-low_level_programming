#include "main.h"
#include <string.h>
/**
 * leet - encodes a string into
 * @s: string to modify
 * Return: string
 */
char *leet(char *s)
{
char *ns = "43071";
char *ltt = "aeotl";
int i, j, len = strlen(s), l2 = strlen(ns);
for (i = 0; i < len; i++)
{
for (j = 0; j < l2; j++)
{
if (s[i] == ltt[j] || s[i] == ltt[j] - 32)
{
s[i] = ns[j];
}
}
}
return (s);
}
