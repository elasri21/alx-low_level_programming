#include <stdio.h>
#include <stdlib.h>
/**
 * helper - helper function
 * @nb: number of byte
 * Return: Nothing
 */
void helper(int nb)
{
int i;
unsigned char *ptr = (unsigned char *)helper;
for (i = 0; i < nb; i++)
{
printf("%02x ", *(ptr + i));
}
printf("\n");
}
/**
 * main - check code
 * @argc: number of arguments
 * @argv: array of args
 * Return: 0 always
 */
int main(int argc, char *argv[])
{
int nb;
if (argc != 2)
{
printf("Error\n");
exit(1);
}
nb = atoi(argv[1]);
if (nb <= 0)
{
printf("Error\n");
exit(2);
}
helper(nb);
return (0);
}
