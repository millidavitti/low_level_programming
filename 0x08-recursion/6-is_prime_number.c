
/**
 *prime_number - returns 1 if the input integer is a prime number, \
otherwise return 0
*@n: number
*@range: 2 - sqrt(n)
*Return: int
*/

int prime_number(int n, int range)
{
if (n <= 2)
{
return ((n == 2) ? 1 : 0);
}
if (n % range == 0)
{
return (0);
}
if ((range * range) > n)
{
return (1);
}
return (prime_number(n, range + 1));
}
/**
 *is_prime_number - returns 1 if the input integer is a prime number, \
otherwise return 0
*@n: number
*Return: int
*/

int is_prime_number(int n)
{
return (prime_number(n, 2));
}
