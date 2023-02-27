#include <stdio.h>
#include <string.h>
/**
 *rev_string - reverses a string.
 *@s: char*
 *Return: void
 */

void rev_string(char *s)
{
int i, len = strlen(s);
for (i = len - 1; i >= 0; i--)
{
putchar(s[i]);
}
putchar('\n');
}
