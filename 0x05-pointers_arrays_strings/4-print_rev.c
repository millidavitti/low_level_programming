#include <stdio.h>
#include <string.h>
/**
 *print_rev -  prints a string, in reverse, followed by a new line.
 *@s: char*
 *Return: void
 */

void print_rev(char *s)
{
int i, len = strlen(s);
for (i = len - 1; i >= 0; i--)
{
char l = s[i];
putchar(l);
}
putchar('\n');
}
