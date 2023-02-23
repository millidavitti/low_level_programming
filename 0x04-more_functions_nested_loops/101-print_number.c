#include "main.h"


/**
 *print_number -  prints an integer.
 *@n: int
 *return: void
 */

void print_number(int n)
{
int num, i, p;
p = 0;
num = n;
while (num != 0)
{
num /= 10;
++p;
}

for (i = p; i >= 0; i--)
{
int exp, j;
exp = 1;
for (j = 0; j < i; j++)
{
exp = exp * 10;
}
_putchar(((n / exp) % 10) + '0');
}
}
