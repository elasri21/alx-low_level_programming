#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/**
 * main - Entry point.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int i;
for (i = 'z'; i >= 'a'; i--)
{
putchar(i);
}
putchar('\n');
return (0);
}
