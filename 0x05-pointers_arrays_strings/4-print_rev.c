#include <string.h>
/**
 *print_rev -  prints a string, in reverse, followed by a new line.
 *@s: char*
 *Return: void
 */

void print_rev(char *s)
{
char str[] = *s;
int i, len = strlen(str);
for (i = len; i >= len; i--)
{
putchar(str[i]);
}
putchar('\n');
}
