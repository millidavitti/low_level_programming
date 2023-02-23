#include "main.h"


/**
 *print_number -  prints an integer.
 *@n: int
 *return: void
 */

void print_number(int n)
{
int num, p, i;
p = 0;
num = n;
while (num1 != 0)
{
num1 /= 10;
++p;
printf("%d\n", p);
}

for (i = p; i >= 0; i--)
{
putchar(((n / (int) pow(10, i - 1)) % 10) + '0');
}
}
