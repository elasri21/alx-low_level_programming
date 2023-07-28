#include <stdio.h>
/**
 * b - print message
 * Return: Nothing
 */
void b(void)__attribute__((constructor));
void b(void)
{
printf("You're beat! and yet, you must ");
printf("allow,\nI bore my house upon my back!\n");
}
