#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

/**
 * main - main function
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0 in success. 1 otherwise.
 */

int main(int argc, char *argv[])
{
int cents, coins, remining;
if (argc != 2)
{
printf("Error\n");
return (1);
}
cents = atoi(argv[argc - 1]);
coins = 0;
remining = cents;
if (cents < 0)
{
printf("0\n");
return (0);
}
coins += remining / 25;
remining %= 25;
coins += remining / 10;
remining %= 10;
coins += remining / 5;
remining %= 5;
coins += remining / 2;
remining %= 2;
coins += remining;
printf("%d\n", coins);
return (0);
}
