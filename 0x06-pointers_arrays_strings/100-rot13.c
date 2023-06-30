#include "main.h"
#include <string.h>
/**
 * rot13 - encodes a string
 * @s: string to modify
 * Return: string
 */
char *rot13(char *s)
{
char *sl = "abcdefghigklmABCDEFGHIGKLMnopqrstuvwxyzNOPQRSTUVWXYZ";
char *bl = "nopqrstuvwxyzNOPQRSTUVWXYZabcdefghigklmABCDEFGHIGKLM";
int i, j, len = strlen(s), l2 = strlen(sl);
for (i = 0; i < len; i++)
{
for (j = 0; j < l2;j++)
{
if (s[i] == sl[j] )
{
s[i] = bl[j];
}	
}
}
return (s);
}
