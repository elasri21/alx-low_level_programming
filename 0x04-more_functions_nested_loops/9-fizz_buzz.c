#include <stdio.h>
/**
 * main holds the script
 *
 * Return: Always 0.
 */
int main(void)
{
int i;
for (i = 1; i <= 100; i++)
{
if (i % 3 == 0 && i % 5 == 0)
printf("%s ", "FizzBuzz");
else if (i % 3 == 0)
printf("%s ", "Fizz");
else if (i % 5 == 0 && i != 100)
printf("%s ", "Buzz");
else if (i % 5 == 0 && i == 100)
printf("%s\n", "Buzz");
else
printf("%d ", i);
}
return (0);
}
