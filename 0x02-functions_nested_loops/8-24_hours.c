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
if (i < 10)
{
_putchar('0');
_putchar(sprintf(s1, "%d", i);
_putchar(':');
}
else
{
_putchar(sprintf(s1, "%d", i);
_putchar(':');
}
if (j < 10)
{
_putchar('0');
_putchar(sprintf(s2, "%d", j);
}
else
{
_putchar(sprintf(s2, "%d", j);
}
_putchar('\n');
}
}
}
