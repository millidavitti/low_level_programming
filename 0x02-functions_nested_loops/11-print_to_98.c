#include "main.h"
#include <stdlib.h>

/**
 *print_to_98 - prints all natural numbers from n to 98, \
followed by a new line
*@n: int
*
*Return: void
*/

void print_to_98(int n)
{
int i;
for (i = n; i < 99; i++)
{
int t, u;
t = abs((i - (i % 10)) / 10);
u = abs(i % 10);
if (t > 0)
_putchar(t + '0');
_putchar(u + '0');
if (i == 98)
continue;
_putchar(44);
_putchar(32);
}
_putchar('\n');
}
