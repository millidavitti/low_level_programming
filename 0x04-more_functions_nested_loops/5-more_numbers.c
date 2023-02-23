#include "main.h"

/**
 *more_numbers - prints 10 times the numbers, \
from 0 to 14, followed by a new line.
*return: void
 */

void more_numbers(void)
{
int x, y;
for (x = 0; x < 10; x++)
{
for (y = 0; y < 15; y++)
{
int t, u;
t = (y - (y % 10)) / 10;
u = y % 10;

if (t > 0)
_putchar(t + '0');

_putchar(u + '0');
}
_putchar('\n');
}
}
