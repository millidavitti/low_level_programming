#include "main.h"

/**
 *print_number -  prints an integer.
 *@n: int
 *return: void
 */

void print_number(int n)
{
int th, h, t, u, num;
double p = 0;
num = n;

while (num1 != 0)
{
num1 /= 10;
p++;
}

th = (n / (int) pow(10, p - 1));
h = (n / (int) pow(10, p - 2)) % 10;
t = (n / (int) pow(10, p - 3)) % 10;
u = n % 10;

if (th > 0)
_putchar(th + '0');
if (h > 0 || (th > 0 && h == 0))
_putchar(h + '0');
if (t > 0 || (h >= 0 && t == 0))
_putchar(t + '0');
_putchar(u + '0');
}
