#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * main - the main function
 * @argc: Number of arguments
 * @argv: array of arguments
 * Return: 0 always
 */
int main(int argc, char *argv[])
{
char *name = argv[0];
char *lastSeparator = strrchr(name, '/');
if (lastSeparator != NULL)
{
name = lastSeparator + 1;
}
printf("%s\n", name);
return (argc);
}
