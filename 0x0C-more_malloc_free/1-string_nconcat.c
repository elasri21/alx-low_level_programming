#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * string_nconcat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: Number of s2 char to concat
 * Return: string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *s;
unsigned int len = strlen(s2);
if (n >= len)
n = len;
if (len == 0)
n = 0;
if (s2 == NULL)
return (s1);
if (s1 == NULL)
return (s2);
s = malloc(sizeof(char) * n + sizeof(s1));
if (s == NULL)
return (NULL);
strcpy(s, s1);
strncat(s, s2, n);
return (s);
}
