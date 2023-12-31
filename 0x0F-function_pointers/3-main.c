#include "3-calc.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * main - check code
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
int n1, n2, res;
int (*f)(int, int);
if (argc != 4)
{
printf("Error\n");
exit(98);
}
n1 = atoi(argv[1]);
n2 = atoi(argv[3]);
f = get_op_func(argv[2]);
if (f == NULL)
{
printf("Error\n");
exit(99);
}
if (n2 == 0 && f != NULL)
{
printf("Error\n");
exit(100);
}
res = f(n1, n2);
printf("%d\n", res);
return (0);
}
