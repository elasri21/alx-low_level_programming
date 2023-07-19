#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
/**
 * get_op_func - get operation
 * @s: operation
 * Return: integer
 */
int (*get_op_func(char *s))(int, int)
{
op_t ops[] = {
{"+", op_add},
{"-", op_sub},
{"*", op_mul},
{"/", op_div},
{"%", op_mod},
{NULL, NULL}
};
int i;
if (s == NULL)
return (NULL);
i = 0;
while (ops[i].op != NULL)
{
if (strcmp(s, ops[i].op) == 0)
break;
else
i++;
}

return (ops[i].f);
}
