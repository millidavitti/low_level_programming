#include <ctype.h>
#include "main.h"

/**
 *_isdigit - checks for a digit (0 through 9).
 *@c: digit
 *Return: int
 */

int _isdigit(int c)
{
if (isdigit(c))
return (1);
else
return (0);
}
