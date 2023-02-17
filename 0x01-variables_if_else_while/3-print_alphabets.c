#include <stdio.h>

/**
 *main - prints the alphabet in lowercase, and then in uppercase
 *
 *Return: void
 */

int main(void)
{
int lower, upper;
lower = 65;
upper = 97;

while (upper < 123)
{
if (lower < 91)
{
putchar(lower);
lower++;
}
else if (upper < 123)
{
putchar(upper);
upper++;
}
}
putchar('\n');
}
