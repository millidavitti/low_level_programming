#include "main.h"

/**
 *print_times_table - prints the n times table, starting with 0.
 *@n: int
 *
 *Return: int
 */


void print_times_table(int n)
{
int x, y;
if (n < 0 || n > 15)
return;

for (x = 0; x <= n; x++)
{
for (y = 0; y <= n; y++)
{
int h, t, u, m;
m = x * y;
h  = (m - (m % 100)) / 100;
t = ((m - (m % 10)) / 10) % 10;
u = m % 10;

if (h > 0)
_putchar(h + '0');
else if (y > 0)
_putchar(32);

if (t > 0 || (h > 0 && t == 0))
_putchar(t + '0');
else if (y > 0)
_putchar(32);

_putchar(u + '0');
if (y == n)
continue;
_putchar(44);
_putchar(32);

}
_putchar('\n');
}
}
