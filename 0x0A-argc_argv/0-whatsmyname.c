#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * main - the main function
 * @argc: Number of arguments
 * @argv: array of arguments
 * Return: 0 always
 */
int main(int argc, char *argv)
{
char *name = argv[0];
int i, len0 = strlen(argv[0]);
for (i = 0; i < len0; i++)
{
_putchar(name[i]);
}
_putchar('\n');
return (0);
}
