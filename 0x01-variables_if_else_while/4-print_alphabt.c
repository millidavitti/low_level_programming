#include <stdio.h>

/**
 *main - prints the alphabet in lowercase, followed by a new line
 *
 *Return: void
 */

int main(void)
{
int lower = 97;

while (lower <= 122)
{
if (lower == 101 || lower == 113)
{
lower++;
continue;
}
putchar(lower);
lower++;
}
putchar('\n');
return (0);
}
