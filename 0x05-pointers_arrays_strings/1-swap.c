#include "main.h"
/**
 * swap_int -  swaps the values of two integers
 * @a: pointer
 * @b: pointer
 * Return: nothing
 */
void swap_int(int *a, int *b)
{
int tmp = *a;
*a = *b;
*b = tmp;
}
