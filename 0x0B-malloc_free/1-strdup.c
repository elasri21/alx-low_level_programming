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
int len = strlen(str);
char *newStr;
if (str == NULL)
return (NULL);
newStr = (char *)malloc(sizeof(char) * len + 1);
if (newStr == NULL)
return (NULL);
else
{
strcpy(newStr, str);
}
return (newStr);
}
