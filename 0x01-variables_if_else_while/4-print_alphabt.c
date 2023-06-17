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
 for (i = 'a'; i <= 'z'; i++)
 {
 if (i == 'e' || i == 'q')
 {
 continue;
 }
 else
 {
 putchar(i);
 }
 }
 putchar('\n');
 return (0);
}
