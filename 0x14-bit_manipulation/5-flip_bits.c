#include <stdio.h>
#include "main.h"

/**
 * flip_bits - check for flips between 2 nums
 * @n: first number
 * @m: second number
 * Return: the number of flip between n and m
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
unsigned int flip = 0;
unsigned long int comp = n ^ m;
while (comp != 0)
{
flip += comp & 1;
comp >>= 1;
}
return (flip);
}
