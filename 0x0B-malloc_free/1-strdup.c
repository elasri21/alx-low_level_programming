#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _strdup - returns a pointer to a string
 * @str: original string
 * Return: string
 */
char *_strdup(char *str)
{
int i, len = strlen(str);
char *newStr;
if (len == 0 || str == NULL)
return (NULL);
newStr = malloc(sizeof(char) * len);
for (i = 0; i < len; i++)
{
newStr[i] = str[i];
}
return (newStr);
}
