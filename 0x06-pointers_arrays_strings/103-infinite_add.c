#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * infinite_add - adds two numbers
 * @n1: number one
 * @n2: number two
 * @r: buffer to store the result
 * @size_r: buffer size
 * Return: string
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
int i, j, l, sum = 0;
sscanf(n1, "%d", &i);
sscanf(n2, "%d", &j);
sum = i + j;
sprintf(r, "%d", sum);
l = strlen(r);
if (size_r > l)
{
return "0";
}
return (r);
}
