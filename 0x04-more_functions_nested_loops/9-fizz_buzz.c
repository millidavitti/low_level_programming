#include "main.h"
#include <stdio.h>

/**
 *main - multiples of 3 get replaced wtih fizz \
multiples of 5 get replaced with buzz and \
multiples of both 3 and 5 get replaced with fizzbuzz
*return: void
 */

int main(void)
{
int n;
for (n = 1; n <= 100; n++)
{
int t, u;
t = (n - (n % 10)) / 10;
u = n % 10;
if (n % 3 == 0 && n % 5 == 0)
{
putchar(70);
putchar(105);
putchar(122);
putchar(122);

putchar(66);
putchar(117);
putchar(122);
putchar(122);
putchar(32);
continue;
}
else if (n % 3 == 0)
{
putchar(70);
putchar(105);
putchar(122);
putchar(122);
putchar(32);
continue;
}
else if (n % 5 == 0)
{
putchar(66);
putchar(117);
putchar(122);
putchar(122);
putchar(32);
continue;
}
if (t > 0)
putchar(t + '0');
putchar(u + '0');
putchar(32);

}
return (0);
}
