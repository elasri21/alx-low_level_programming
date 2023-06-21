#include <stdio.h>
#include "main.h"
/**
 * jack_bauer - prints every minute of the day
 *
 */
void jack_bauer(void)
{
int i, j;
for (i = 0; i < 24; i++)
{
for (j = 0; j < 60; j++)
{
char s1[2], s2[2];
sprintf(s1, "%d", i);
sprintf(s2, "%d", j);
if (i < 10)
{
_putchar('0');
_putchar(s1[0]);
_putchar(':');
}
else
{
_putchar(s1[0]);
_putchar(s1[1]);
_putchar(':');
}
if (j < 10)
{
_putchar('0');
_putchar(s2[0]);
}
else
{
_putchar(s2[0]);
_putchar(s2[1]);
}
_putchar('\n');
}
}
}
