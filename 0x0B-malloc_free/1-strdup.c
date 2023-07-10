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
newStr = malloc(sizeof(char) * len + 1);
if (str == NULL)
return (NULL);
for (i = 0; i < len; i++)
{
newStr[i] = str[i];
}
if (newStr == NULL)
return (NULL);
return (newStr);
}
