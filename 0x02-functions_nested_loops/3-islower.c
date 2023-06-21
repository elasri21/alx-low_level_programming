#include "main.h"
/** Check if the character is a lowercase letter.
*Parameters:
* c: the character to be checked (must be a lowercase letter)
*Returns:
* 1 if the character is lowercase and 0 otherwise
*/
int _islower(int c)
{
if (c >= 'a' && c <= 'z')
{
return (1);
}
else
{
return (0);
}
}
