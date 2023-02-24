#include <math.h>
#include <stdio.h>
/**
 *main -largest prime factor
 *Return: void
 */
int main(void)
{
long max_prime = -1;
long n = 612852475143;
int i;
while (n % 2 == 0)
{
max_prime = 2;
n /= 2;
}
while (n % 3 == 0)
{
max_prime = 3;
n = n / 3;
}

for (i = 5; i <= sqrt(n); i += 6)
{
while (n % i == 0)
{
max_prime = i;
n = n / i;
}
while (n % (i + 2) == 0)
{
max_prime = i + 2;
n = n / (i + 2);
}
}
if (n > 4)
max_prime = n;
printf("%ld", max_prime);
return (0);
}
