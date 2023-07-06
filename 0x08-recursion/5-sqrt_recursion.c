#include "main.h"
#include <math.h>
/**
 * sqrtRecursive -  returns integer
 * @num: base integer
 * @start: integer to start
 * @end: Interger to end
 * Return: integer
 */
int sqrtRecursive(int num, int start, int end)
{
int mid, square;
if (start > end)
return (end);
mid = (start + end) / 2;
square = mid * mid;
if (square == num)
return (mid);
else if ((mid + 1 + end) / 2 == mid || (start + mid - 1) / 2 == mid)
return (-1);
else if (square < num)
return (sqrtRecursive(num, mid + 1, end));
else
return (sqrtRecursive(num, start, mid - 1));
}

/**
 * _sqrt_recursion -  returns the natural square root of a number.
 * @num: base integer
 * Return: integer
 */
int _sqrt_recursion(int num)
{
if (num < 0)
return (-1);
if (num == 1)
return (1);
return (sqrtRecursive(num, 0, num));
}
