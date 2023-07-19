#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * print_name - prints a name
 * @name: the name to be printed
 * @f: function
 * Return: Nothing
 */
void print_name(char *name, void (*f)(char *))
{
if (name)
f(name);
}
