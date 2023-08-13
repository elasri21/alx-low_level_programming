#include <stdio.h>
#include "main.h"
/**
 * get_endianness - checks the endianness
 * Return: 0 if big. 1 if little
 */
int get_endianness(void)
{
unsigned int n = 1;
unsigned char *b = (unsigned char *)&n;
return ((int)(*b));
}
