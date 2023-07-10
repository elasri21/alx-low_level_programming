#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * str_concat - concatenate 2 strings
 * @s1: first string
 * @s2: second string
 * Return: string
 */
char *str_concat(char *s1, char *s2)
{
if (s1 == NULL && s2 == NULL)
return (NULL);
else
{
char *s;
if (s1 == NULL)
{
s = (char *)malloc(sizeof(char) * +strlen(s2) + 1);
strcpy(s, s2);
}
else if (s2 == NULL)
{
s = (char *)malloc(sizeof(char) * strlen(s1) + 1);
strcpy(s, s1);
}
else
{
s = (char *)malloc(sizeof(char) * (strlen(s1) + strlen(s2)) + 1);
strcpy(s, s1);
strcat(s, s2);
}
return (s);
}
}
