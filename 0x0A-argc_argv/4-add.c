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
int result = 0, i, j;
if (argc < 2)
{
printf("0\n");
return (0);
}
for (i = 1; i < argc; i++)
{
for (j = 0; argv[i][j] != '\0'; j++)
{
if (!isdigit(argv[i][j]))
{
printf("Error\n");
return (1);
}
}
result += atoi(argv[i]);;
}
printf("%d\n", result);
return (0);
}
