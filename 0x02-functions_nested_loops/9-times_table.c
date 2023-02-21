#include "main.h"

/**
 *times_table - prints the 9 times table, starting with 0.
 *
 *Return: void
 */

void times_table(void)
{
int i, j;
for (i = 0; i < 12; i++)
{
for (j = 0; j < 10; j++)
{
_putchar((i * j) + '0');
}
_putchar('\n');
}
}
