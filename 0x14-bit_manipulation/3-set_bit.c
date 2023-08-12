#include <stdio.h>
#include "main.h"
/**
 * set_bit - set bit at index
 * @n: pointer to a number
 * @index: index to set a bit
 * Return: 1 on success. -1 otherwise
 *
 */
int set_bit(unsigned long int *n, unsigned int index)
{
if (index >= sizeof(unsigned long int) * 8)
return (-1);
*n |= (1UL << index);
return (1);
}
