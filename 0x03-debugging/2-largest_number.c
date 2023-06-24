#include "main.h"
/**
 * largest_number - returns the largest of 3 numbers
 * @a: first integer
 * @b: second integer
 * @c: third integer
 * Return: largest number
 */
int largest_number(int a, int b, int c)
{
int largest;
largest = a;
if (a > b && (b > c || a > c))
largest = a;
else if (a > c && (a > b || c > b))
largest = a;
else if (b > a && (a > c || b > c))
largest = b;
else if (b > c && (c > a || b > a))
largest = b;
else if (c > a && (c > b || a > b))
largest = c;
else if (c > b && (c > a || b > a))
largest = c;
return (largest);
}
