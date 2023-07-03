#include "main.h"
#include <string.h>
/**
 * _strspn -  gets the length of a prefix substring
 * @s: prefix substring
 * @accept: string
 * Return: string
 */

unsigned int _strspn(char *s, char *accept)
{
return (strspn(s, accept));
}
