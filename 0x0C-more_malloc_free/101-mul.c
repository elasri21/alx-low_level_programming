#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
/**
 *checkdigit - check for digits in a string
 * @str: string to check
 * Return: 1 if so. 0 otherwise
 */
int checkdigit(char *str)
{
int i;
for (i = 0; str[i]; i++)
if (!isdigit(str[i]))
return (0);
return (1);
}
/**
 * main - multiplies two positive numbers
 * @argc: the number of arguments
 * @argv: the arguments
 *
 * Return: 0 on success, 98 on failure
 */
int main(int argc, char **argv)
{
int len1, len2, i, j, carry, n1, n2, sum;
int *result;
if (argc != 3 || !checkdigit(argv[1]) || !checkdigit(argv[2]))
{
printf("Error\n");
return (98);
}
len1 = strlen(argv[1]);
len2 = strlen(argv[2]);
result = calloc(len1 + len2, sizeof(int));
if (!result)
exit(98);
for (i = len1 - 1; i >= 0; i--)
{
carry = 0;
n1 = argv[1][i] - '0';
for (j = len2 - 1; j >= 0; j--)
{
n2 = argv[2][j] - '0';
sum = n1 *n2 + result[i + j + 1] + carry;
result[i + j + 1] = sum % 10;
carry = sum / 10;
}
result[i + j + 1] = carry;
}
i = 0;
while (result[i] == 0 && i < len1 + len2 - 1)
i++;
while (i < len1 + len2)
printf("%d", result[i++]);
printf("\n");
free(result);
return (0);
}
