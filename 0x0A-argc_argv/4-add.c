#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
/**
 * main - main function
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0 on success0. 1 otherwise
 */

int main(int argc, char *argv[])
{
int result = 0, i;
if (argc < 3)
{
printf("0\n");
return (0);
}
for (i = 1; i < argc; i++)
{
int n = atoi(argv[i]);
if (!n)
{
printf("Error\n");
return (1);
}
else if (n > 0)
{
result = result + n;
}
}
printf("%d\n", result);
return (0);
}
