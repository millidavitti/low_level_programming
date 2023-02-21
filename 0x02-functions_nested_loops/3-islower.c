#include "main.h"
#include <ctype.h>

/**
 *_islower - checks for lowercase character.
 *@c: int
 *
 *Return: int
 */

int _islower(int c)
{
if (islower(c))
{
return (1);
}
else
{
return (0);
}
}
