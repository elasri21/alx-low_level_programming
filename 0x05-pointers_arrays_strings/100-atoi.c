#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * _atoi - convert a string to an integer
 * @s: string to convert
 * Return: Integer number
 */
int _atoi(char *s)
{
int i, tmp;
char *strNum = "";
for (i = 0; s[i] != '\0'; i++)
{
if (s[i] >= '0' && s[i] <= '9')
{
if (s[i - 1] == '+' || s[i - 1] == '-')
{
strNum += s[i - 1];
strNum += s[i];
}
else
strNum += s[i];
}
}
if (strlen(strNum) < 1)
tmp = 0;
else
sscanf(strNum, "%d", &tmp);
return (tmp);
}
