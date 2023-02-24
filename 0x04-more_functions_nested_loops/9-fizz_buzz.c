#include <stdio.h>

/**
 *main - multiples of 3 get replaced wtih fizz \
multiples of 5 get replaced with buzz and \
multiples of both 3 and 5 get replaced with fizzbuzz
*Return: int
 */

int main(void)
{
int n;
for (n = 1; n <= 100; n++)
{

if (n % 3 == 0 && n % 5 == 0)
{
printf("FizzBuzz");
}
else if (n % 3 == 0)
{
printf("Fizz");
}
else if (n % 5 == 0)
{
printf("Buzz");
}
else
{
printf("%d", n);
}
if (n != 100)
printf(" ");
}
putchar('\n');
return (0);
}
