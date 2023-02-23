#include "main.h"

/**
 *print_diagonal - draws a diagonal line on the terminal.
 *@n: int
 *return: void
 */

void print_diagonal(int n)
{
int x, y;
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
_puchar('\n');
}
