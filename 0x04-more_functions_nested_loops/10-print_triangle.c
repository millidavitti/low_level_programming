#include "main.h"

/**
 *print_triangle - prints a triangle, followed by a new line.
 *@size: int
 *return: void
 */

void print_triangle(int size)
{
int x, y;
if (size < 0 || size == 0)
_putchar('\n');
for (x = 0; x < size; x++)
{
for (y = 0; y < size; y++)
{
if (y >= size - x - 1)
_putchar('#');
else
_putchar(' ');
}
_putchar('\n');
}
}
