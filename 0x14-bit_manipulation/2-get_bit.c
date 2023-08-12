#include <stdio.h>
#include "main.h"
/**
 * get_bit - get bit at index
 * @n: number to work with
 * @index: position of the bit
 * Return: Bit at index
 */
int get_bit(unsigned long int n, unsigned int index)
{
unsigned long int tmp = 1UL << index;
if (index >= sizeof(unsigned long int) * 8)
return (-1);
if (n & tmp)
return (1);
else
return (0);
}
