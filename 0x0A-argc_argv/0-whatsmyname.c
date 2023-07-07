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
int i, len0;
char *name = argv[0];
char *lastSeparator = strrchr(name, '/');
if (lastSeparator != NULL)
{
name = lastSeparator + 1;
}
len0 = strlen(argv[0]);
for (i = 0; i < len0; i++)
{
_putchar(name[i]);
}
_putchar('\n');
return (0);
}
