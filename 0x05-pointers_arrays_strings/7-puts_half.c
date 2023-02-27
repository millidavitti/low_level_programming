#include <stdio.h>
#include <string.h>

/**
 *puts_half - prints half of a string, followed by a new line.
 *@str: char*
 *Return: void
*/

void puts_half(char *str)
{
int n, i, len = strlen(str), half;
n = (len - 1) / 2;
half = !(len % 2) ? len / 2 : n + 1;

for (i = half; i < len; i++)
{
putchar(str[i]);
}
putchar('\n');
}
