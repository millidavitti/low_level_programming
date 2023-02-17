#include <stdio.h>

/**
 *main - prints the lowercase alphabet in reverse, followed by a new line.
 *
 *Return: void
 */

int main(void)
{
int ascii = 122;

while (ascii > 96)
{
putchar(ascii);
ascii--;
}
putchar('\n');
return (0);
}
