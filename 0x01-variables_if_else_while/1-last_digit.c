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
int lastDigit;
char str[50];
char last[3] = "";
srand(time(0));
n = rand() - RAND_MAX / 2;
sprintf(str, "%d", n);
if (str[0] == '-')
{
last[0] = str[0];
last[1] = str[strlen(str) - 1];
}
else
{
last[0] = str[strlen(str) - 1];
}
lastDigit = atoi(last);
if (lastDigit != 0 && lastDigit < 6)
{
printf("Last digit of %d is %d and is less than 6 and not 0\n", n, lastDigit);
}
else if (lastDigit > 5)
{
printf("Last digit of %d is %d and is greater than 5\n", n, lastDigit);
}
else
{
printf("Last digit of %d is %d and is 0 and is 0\n", n, lastDigit);
}
return (0);
}
