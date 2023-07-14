#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 *checkDigit - check for digits in a string
 * @s: string to check
 * Return: true if so. false otherwise
 */
bool checkDigit(char *s)
{
int i = 0;
while (s[i] != '\0')
{
if (isdigit(s[i]))
continue;
else
return (false);
i++;
}
return (true);
}

/**
 * main - main function
 * @argc: number of argumentd
 * @argv: array of arguments
 * Return: 0 always
 */
int main(int argc, char **argv)
{
int *mul;
if (argc != 3)
{
printf("Error\n");
exit(98);
}
if (!checkDigit(arrgc[1]) || !checkDigit(argv[2]))
{
printf("Error\n");
exit(98);
}
mul = (int *)malloc(sizeof(int));
if (mul == NULL)
{
printf("Error\n");
exit(98);
}
mul = argv[1] * argv[2];
printf("%d\n", *mul);
free(mul);
return (0);
}
