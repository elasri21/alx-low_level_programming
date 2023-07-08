#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
/**
 * main - main function
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0 always
 */

int main(int argc, char *argv[])
{
int n1, n2, result = 0;
(void)argc;
n1 = atoi(argv[1]);
n2 = atoi(argv[2]);
if (n1 != (int)n1 || n2 != (int)n2)
{
printf("Error\n");
return (1);
}
result = n1 * n2;
printf("%d\n", result);
return (0);
}
