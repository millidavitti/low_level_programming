#include "main.h"

/**
 *print_diagonal - draws a diagonal line on the terminal.
 *@n: int
 *return: void
 */

void print_diagonal(int n)
{
int x, y;
if (n < 0 || n == 0)
_putchar('\n');
for (x = 0; x < n; x++)
{
for (y = 0; y < x + 1; y++)
{

if (y == x)
_putchar('\\');
else
_putchar(' ');
}
_putchar('\n');
}
}
