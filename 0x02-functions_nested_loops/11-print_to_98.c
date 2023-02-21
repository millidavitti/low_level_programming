#include "main.h"

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
t = (i - (i % 10)) / 10;
u = i % 10;
_putchar(u + '0');
_putchar(44);
_putchar(32)
}
}
