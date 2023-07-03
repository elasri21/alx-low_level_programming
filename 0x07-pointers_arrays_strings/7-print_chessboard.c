#include "main.h"
#include <string.h>
/**
 * print_chessboard -   prints the chessboard
 * @a: two diminsional array
 * Return: Nothing
 */

void print_chessboard(char (*a)[8])
{
int i, j;
for (i = 0; i < 8; i++)
{
for (j = 0; j < 8;j++)
{
if (i >= 2 && i <= 5)
{
_putchar('\n');
break;
}
else
{
_putchar(a[i][j]);
}
}
_putchar('\n');
}
}
