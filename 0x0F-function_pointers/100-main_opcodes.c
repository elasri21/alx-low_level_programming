#include <stdio.h>
/**
 * helper - helper function
 * Return: Nothing
 */
void helper()
{
int i;
void *addr = (void *)helper;
for (i = 0; i < 32; i++)
{
printf("%02x ", ((unsigned char *)addr)[i]);
}
printf("\n");
}
/**
 * main - check code
 * Return: 0 always
 */
int main() {
helper();
return 0;
}
