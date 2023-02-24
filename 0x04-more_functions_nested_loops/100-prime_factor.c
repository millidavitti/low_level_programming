#include <math.h>
#include <stdio.h>
/**
 *main -largest prime factor
 *Return: void
 */
int main(void)
{
long prime = 612852475143, fact = 0;

while (fact < (prime / 2))
{
if (!(prime % 2))
{
prime = prime / 2;
continue;
}
for (fact = 3; fact < (prime / 2); fact += 2)
{
if ((prime % fact) == 0)
prime = prime / fact;
}
}
printf("%ld", prime);
return (0);
}
