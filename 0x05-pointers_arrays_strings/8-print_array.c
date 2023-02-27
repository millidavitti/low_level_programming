#include <stdio.h>

/**
 *print_array - prints n elements of an array of integers, \
followed by a new line.
*@a: array of int*
*@n: int
*/

void print_array(int *a, int n)
{
int i;
for (i = 0; i < n; i++)
{
printf("%d, ", a[i]);
}
putchar('\n');
}
