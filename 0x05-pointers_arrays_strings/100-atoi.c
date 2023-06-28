#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * _atoi - convert a string to an integer
 * @s: string to convert
 * Return: Integer number
 */
int _atoi(char *s)
{
int i, j = 0, len = strlen(s);
char tmp[100];
for (i = 0; i < len; i++)
{
if (s[i] != '+' && s[i] != '-' && s[i] < '0' && s[i] > '9' && s[i + 1])
continue;
else if (s[i] != '+' && s[i] != '-' && s[i] < '0' && s[i] > '9')
break;
else if ((s[i] == '+' && j == 0) || (s[i] == '+' && j == 1))
continue;
else if (s[i] == '-' && j == 0)
{
tmp[j] = s[i];
j++;
}
else if (tmp[0] == '-' && s[i] == '-' && j == 1)
{
tmp[0] = '\0';
j--;
}
else if (j > 1 && (s[i] == '+' || s[i] == '-'))
continue;
else if (s[i] >= '0' && s[i] <= '9')
{
if (((i + 1) != len) && (s[i + 1] >= '0' && s[i + 1] <= '9'))
{
tmp[j] = s[i];
j++;
}
else
{
tmp[j] = s[i];
j++;
break;
}
}
}
tmp[j] = '\0';
return (*tmp - '0');
}
