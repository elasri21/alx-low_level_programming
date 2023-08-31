#include "main.h"
/**
 * get_endianness - checks the endianness
 * Return: integer
 */
int get_endianness(void)
{
unsigned int j = 1;
char *ch = (char *)&j;
return (*ch);
}
