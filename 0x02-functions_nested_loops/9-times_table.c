#include "main.h"

/**
 *times_table - prints the 9 times table, starting with 0.
 *
 *Return: void
 */

void times_table(void)
{
int i, j;
for (i = 0; i < 10; i++)
{
for (j = 0; j < 10; j++)
{
int m, t, u;
m = i * j;
t = (m - (m % 10)) / 10;
u = m % 10;
if (t > 0)
_putchar(t + '0');

_putchar(u + '0');
if (j == 9)
continue;
_putchar(44);
_putchar(32);
}
_putchar('\n');
}
}
