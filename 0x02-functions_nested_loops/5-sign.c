#include "main.h"

/**
 *print_sign - prints the sign of a number.
 *@n: int
 *
 *Return: int
 */

int print_sign(int n)
{
if (n > 0)
{
_putchar(43);
_putchar(49);
return (1);
}
else if (n < 0)
{
_putchar(45);
_putchar(49);
return (-1);
}
else
{
_putchar(48);
_putchar(48);
return (0);
}
}
