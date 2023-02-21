#include "main.h"
#include <stdlib.h>

/**
 *print_last_digit - prints the last digit of a number.
 *@n: int
 *
 *Return: int
 */

int print_last_digit(int n)
{
int r = abs(n % 10);
_putchar(r+'0');
return (r);
}
