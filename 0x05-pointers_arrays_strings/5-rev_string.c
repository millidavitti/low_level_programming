#include <stdio.h>
#include <string.h>
/**
 *rev_string - reverses a string.
 *@s: char*
 *Return: void
 */

void print_rev(char *s)
{
int i, len = strlen(s);
for (int i = 0; i < len / 2; i++)
{
char temp = s[i];
s[i] = s[len - i - 1];
s[len - i - 1] = temp;
}
}
