#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
/**
 * main - main function
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0 if aggc > 0. 1 otherwise
 */

int main(int argc, char *argv[])
{
int n1, n2, result = 0;
if (argc != 3)
{
printf("Error\n");
return (1);
}
n1 = atoi(argv[1]);
n2 = atoi(argv[2]);
result = (n1 *n2);
printf("%d\n", result);
return (0);
}
