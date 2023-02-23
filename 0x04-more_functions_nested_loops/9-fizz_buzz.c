#include "main.h"

/**
 *main - multiples of 3 get replaced wtih fizz \
multiples of 5 get replaced with buzz and \
multiples of both 3 and 5 get replaced with fizzbuzz
*return: void
 */

void fizz_buzz(void)
{
int n;
for (n = 1; n <= 100; n++)
{
int t, u;
t = (n - (n % 10)) / 10;
u = n % 10;
if (n % 3 == 0 && n % 5 == 0)
{
_putchar(70);
_putchar(105);
_putchar(122);
_putchar(122);
       
_putchar(66);
_putchar(117);
_putchar(122);
_putchar(122);
_putchar(32);
continue;
}
else if (n % 3 == 0)
{
_putchar(70);
_putchar(105);
_putchar(122);
_putchar(122);
_putchar(32);
          
continue;
}
else if (n % 5 == 0)
{
_putchar(66);
_putchar(117);
_putchar(122);
_putchar(122);
_putchar(32);
continue;
}
if (t > 0)
_putchar(t + '0');      
_putchar(u + '0');
_putchar(32);
      
}
}
