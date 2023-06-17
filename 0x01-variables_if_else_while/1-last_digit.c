#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
char str[50];
sprintf(str, "%d", n);
char last[3] = "";
if (str[0] == '-')
{
last += str[0];
}
last += str[strlen(str) - 1];
int lastDigit = atoi(last);
if (lastDigit > 0 && last < 6)
{
printf("Last digit of %d is %d and is less than 6 and not 0", n, lastDigit);
}
else if (last > 5)
{
printf("Last digit of %d is %d and is greater than 5 and not 0", n, lastDigit);
}
else
{
printf("Last digit of %d is %d and is 0 and is 0", n, lastDigit);
}
return (0);
}
