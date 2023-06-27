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
int i, res = 0, j = 0, len = strlen(s);
char tmp[100];
for (i = 0; i < len; i++)
{
if (s[i] != '+' && s[i] != '-' && s[i] < '0' && s[i] > '9' && strlen(tmp) != 0)
break;
else if (s[i] == '+' || s[i] == '-')
{
if (i + 1 != len && s[i + 1] >= '0' && s[i + 1] <= '9')
{
tmp[j] = s[i];
j++;
}
else if (j == 0 && (s[i] == '+' || s[i] == '-'))
{
if ((tmp[0] == '-' && s[i] == '+') || (tmp[0] == '+' && s[i] == '-'))
{
tmp[0] = '-';
}
else if (tmp[0] == s[i])
{
tmp[0] = '\0';
j = 0;
}
}
else
break;
}
else if (s[i] >= '0' && s[i] <= '9')
{
if (s[i + 1] >= '0' && s[i + 1] <= '9')
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
else
continue;
}
tmp[j] = '\0';
sscanf(tmp, "%d", &res);
return (res);
}
