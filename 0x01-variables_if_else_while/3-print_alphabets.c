#include <stdio.h>

/**
 *main - prints the alphabet in lowercase, and then in uppercase
 *
 *Return: void
 */

int main(void)
{
int lower, upper;
upper = 65;
lower = 97;

while (upper < 91)
{
if (lower < 123)
{
putchar(lower);
lower++;
}
else if (upper < 91)
{
putchar(upper);
upper++;
}
}
putchar('\n');

return (0);
}
