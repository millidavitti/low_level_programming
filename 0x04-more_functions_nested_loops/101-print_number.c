#include "main.h"


/**
 *print_number -  prints an integer.
 *@n: int
 *return: void
 */

void print_number(int n)
{
int num, i, p, abs;
if (n > 0)
abs = n;
else if (n < 0)
{
abs = -(n);
_putchar('-');
}
else
_putchar(n + '0');
p = 0;
num = abs;
while (num != 0)
{
num /= 10;
++p;
}

for (i = p - 1; i >= 0; i--)
{
int exp, j;
exp = 1;
for (j = 0; j < i; j++)
{
exp = exp * 10;
}
_putchar(((abs / exp) % 10) + '0');
}
}
