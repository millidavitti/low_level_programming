#include <stdarg.h>

/**
 *sum_them_all - returns the sum of all its parameters.
 *@n: num of params to sum
 *Return: sum of the params
 */

int sum_them_all(const unsigned int n, ...)
{
va_list args;
unsigned int i;
int arg, sum;
va_start(args, n);
if (n == 0)
return (0);
for (i = 0, sum = 0; i < n; i++)
{
arg = va_arg(args, int);
sum += arg;
}
va_end(args);
return (sum);
}
