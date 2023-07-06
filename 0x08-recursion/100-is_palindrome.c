#include "main.h"
#include <string.h>


/**
 * is_pal - returns 1 if a string is a palindrome and 0 if not
 * @s: string to check
 * @start: index to start
 * @end: last index
 * Return: 1 if so. 0 otherwise
 */

int is_pal(char *s, int start, int end)
{
int len = strlen(s) / 2;
if (s[start] != s[end])
{
return (0);
}
if (s[start] == s[end] && start == len)
{
return (1);
}
if (s[start] == s[end] && start != end)
{
return (is_pal(s, start + 1, end - 1));
}
return (1);
}
/**
 * is_palindrome - returns 1 if a string is a palindrome and 0 if not
 * @s: string to check
 * Return: 1 if so. 0 otherwise
 */

int is_palindrome(char *s)
{
int start = 0;
int end = strlen(s) - 1;
return is_pal(s, start, end);
}
