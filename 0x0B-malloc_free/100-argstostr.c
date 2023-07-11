#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * argstostr - concatenates all the arguments of your program.
 * @ac: Number of arguments
 * @av: array of arguments
 * Return: string
 */
char *argstostr(int ac, char **av)
{
int i, j, len = 0;
char *s;
if (ac == 0 || av == NULL)
return (NULL);
for (i = 0; i < ac; i++)
{
int l = strlen(av[i]);
for (j = 0; j < l; j++)
{
len++;
}
}
s = (char *)malloc(sizeof(char) * len + ac + 1);
if (s == NULL)
return (NULL);
for (i = 0; i < ac; i++)
{
strcat(s, av[i]);
strcat(s, "\n");
}
return (s);
}
