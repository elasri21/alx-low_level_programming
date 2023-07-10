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
return ("");
if (s1 == NULL && s2 != NULL)
return (s2);
if (s1 != NULL && s2 == NULL)
return (s1);
if (s1 != NULL && s2 != NULL)
{
char *s;
s = (char *)malloc(sizeof(char) * (strlen(s1) + strlen(s2)) + 1);
strcpy(s, s1);
strcat(s, s2);
return (s);
}
return (NULL);
}
