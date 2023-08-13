#include <stdio.h>
#include "main.h"

/**
 * clear_bit - sets the value of a bit to 0
 * @n: pointer to the number
 * @index: index of bit to set to 0
 * Return: 1 on success. -1 otherwise
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
if (index >= sizeof(unsigned long int) * 8)
return (-1);
*n &= ~(1UL << index);
return (1);
}
