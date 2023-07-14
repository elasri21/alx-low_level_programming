#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
/**
 *checkDigit - check for digits in a string
 * @s: string to check
 * Return: true if so. false otherwise
 */
int checkDigit(char *s)
{
int i = 0;
while (s[i] != '\0')
{
if (isdigit(s[i]))
i++;
else
return (0);
}
return (1);
}

/**
 * main - main function
 * @argc: number of argumentd
 * @argv: array of arguments
 * Return: 0 always
 */
int main(int argc, char **argv)
{
long int n1, n2, *mul;
char *ar1, *ar2;
if (argc != 3)
{
printf("Error\n");
exit(98);
}
if (checkDigit(argv[1]) == 0 || checkDigit(argv[2]) == 0)
{
printf("Error\n");
exit(98);
}
mul = malloc(sizeof(long int));
if (mul == NULL)
{
printf("Error\n");
exit(98);
}
n1 = strtol(argv[1], &ar1, 10);
n2 = strtol(argv[2], &ar2, 10);
*mul = n1 *n2;
printf("%ld\n", *mul);
free(mul);
return (0);
}
